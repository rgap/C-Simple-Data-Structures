#include <iostream.h>

const int T = 2,
     MAX_CHAVES = 2 * T - 1, //Cantidad máxima de llaves
     MAX_HIJOS = 2 * T, //Cantidad máxima de hijos
     MIN_OCUP = T - 1; //Ocupación mínima en cada nodo 

typedef struct nodo_arbolB arbolB;  

struct nodo_arbolB {  
   int num_llaves;  
   char llaves[MAX_CHAVES];       
   arbolB *hijos[MAX_HIJOS];  
   bool hoja; 
}; 

arbolB*Inicia_Arbol(){
  arbolB*temp;
  if ((temp = (arbolB *) malloc(sizeof(arbolB))) != NULL) 
  { 
    temp->num_llaves=0;
    temp->hoja=true;
    for(int i=0;i<32;i++)
		temp->llaves[i]=NULL;
    return(temp); 
  } 
  else 
    exit(0); 
}

int busca_binaria(arbolB *nodo, int info) 
{ 
  int meio, i, f;  
  i = 0;
  f = nodo->num_llaves-1;

  while (i <= f)
  {
    meio = (i + f)/2;
    if (nodo->llaves[meio] == info)
       return(meio); //Encontró. Retorna la posición en que está la llave.
    else if (nodo->llaves[meio] > info)
            f = meio - 1;
         else i = meio + 1;
  }
  return(i); //No encontró. Retorna la posición del puntero para el hijo.
}
bool busca(arbolB *raiz, int info)
{
  arbolB *nodo;
  int pos; //posición retornada por la búsqueda binaria.
  nodo = raiz;
  while (nodo != NULL)
   {
     pos = busca_binaria(nodo, info);
     if (pos < nodo->num_llaves && nodo->llaves[pos] == info)
         return(true);
     else nodo = nodo->hijos[pos];
   }
  return(false);
}

void en_orden(arbolB *raiz)
{
  int i; 
  if (raiz != NULL)
   {
     for (i = 0; i < raiz->num_llaves; i++)
      {
        en_orden(raiz->hijos[i]);
        printf("%d  ", raiz->llaves[i]);
      }
     en_orden(raiz->hijos[i]);
      }
} 

void insere_chave(arbolB *raiz, int info, arbolB *filhodir)
{
  int k, pos;
  //busca para obtener la posición ideal para insertar la nueva llave
  pos = busca_binaria(raiz, info);
  k = raiz->num_llaves;
  //realiza el reacomodo para mantener las llaves ordenadas
  while (k > pos && info < raiz->llaves[k-1])
  {
    raiz->llaves[k] = raiz->llaves[k-1];
    raiz->hijos[k+1] = raiz->hijos[k];
    k--;
  }
  //inserta la llave en la posición ideal
  raiz->llaves[pos] = info;
  raiz->hijos[pos+1] = filhodir;
  raiz->num_llaves++;
}
//Realiza la búsqueda del nodo para insertar la llave y hace las subdivisiones cuando son necesarias
arbolB *insere(arbolB *raiz, int info, bool *h, int *info_retorno)
{
  int i, j, pos,
      info_mediano; //auxiliar para almacenar la llave que irá a subir para el padre
  arbolB *temp, *filho_dir; //puntero para el hijo derecho de la llave 
  if (raiz == NULL)
   {
     //El nodo anterior es el ideal para insertar la nueva llave (llegó a un nodo hoja)
     *h = true;
     *info_retorno = info;
     return(NULL);
   }
  else {
         pos = busca_binaria(raiz,info);
         if (raiz->num_llaves > pos && raiz->llaves[pos] == info)
           {
             printf("Llave ya contenida en el Árbol");
             *h = false;
           }
         else {
                               //desciende en el árbol hasta encontrar el nodo hoja para insertar la llave.
               filho_dir = insere(raiz->hijos[pos],info,h,info_retorno);
               if (*h) //Si verdadero, debe insertar la info_retorno en el nodo.
                 {
                     if (raiz->num_llaves < MAX_CHAVES) //Tiene espacio en la página
                     {
                       insere_chave(raiz, *info_retorno, filho_dir);
                       *h = false;
                     }
                   else { //Overflow. Necesita subdividir
                          temp = (arbolB *) malloc (sizeof(arbolB));
                          temp->num_llaves = 0;
                         //inicializa hijos con NULL
                         for (i = 0; i < MAX_HIJOS; i++)
                           temp->hijos[i] = NULL;
                         //elemento mediano que va subir para el padre
                         info_mediano = raiz->llaves[MIN_OCUP];
                         //inserta mitad del nodo raíz en temp (efectua subdivisión)
                         temp->hijos[0] = raiz->hijos[MIN_OCUP+1];
                         for (i = MIN_OCUP + 1; i < MAX_CHAVES; i++)
                           insere_chave(temp, raiz->llaves[i], raiz->hijos[i+1]);
                         //actualiza nodo raíz. 
                         for (i = MIN_OCUP; i<MAX_CHAVES; i++)
                         {
                           raiz->llaves[i] = 0;
                           raiz->hijos[i+1] = NULL;
                         }
                         raiz->num_llaves = MIN_OCUP;
                         //Verifica en cuál nodo será insertada la nueva llave
                         if (pos <= MIN_OCUP)
                              insere_chave(raiz, *info_retorno, filho_dir);
                         else insere_chave(temp, *info_retorno, filho_dir);
                         //retorna el mediano para insertarlo en el nodo padre y el temp como hijo derecho del mediano.
                         *info_retorno = info_mediano;
                         return(temp);
                       }
                 }
              }
     }
}
arbolB *insere_arvoreB(arbolB *raiz, int info)
{
  bool h;
  int info_retorno, i;
  arbolB *filho_dir, *nova_raiz;
  filho_dir = insere(raiz,info,&h,&info_retorno);
  if (h)
   { //Aumetará a altura da árvore
     nova_raiz = (arbolB *) malloc (sizeof(arbolB));
     nova_raiz->num_llaves = 1;
     nova_raiz->llaves[0] = info_retorno;
     nova_raiz->hijos[0] = raiz;
     nova_raiz->hijos[1] = filho_dir;
     for (i = 2; i <= MAX_CHAVES; i++)
       nova_raiz->hijos[i] = NULL;
     return(nova_raiz);
   }
  else return(raiz);
}

main() 
{ 
  int aux_l;  
  arbolB *root; 
  int x=0; 
  char opc; 
  
  root= (arbolB*) Inicia_Arbol(); 
  
  while (1) 
  { 
    cout<<"\n Insertar (i) Eliminar (e) Imprimir (p) BusquedaBinaria (b) Sair (s) "; 
    cin>>opc;

    if (opc == 'i') 
    { 
      cout<<"\n Ingrese el nuevo elemento entero "; 
      cin>>x;
      insere_arvoreB(root,x);      
    } 
    
    /*
    if (opc == 'e') 
    { 
      cout<<"\n Ingrese el número entero a buscar "; 
      cin>>x; 
      aux_l = Eliminar_Elemento(l,x);     
      if (aux_l == -1) 
        cout<<"Numero no encontrado\n"; 
    } 
    */

    if (opc == 'p') {
      cout<<"en_orden: ";//IRD
      en_orden(root); 
}
    if(opc=='b'){
      cout<<"\n Ingrese el número entero a buscar "; 
      cin>>x; 
      aux_l=busca_binaria(root,x);     
      if(aux_l==0)
         cout<<"\nNo esta...";
      else
         cout<<"\nSi esta...";
    }
    if (opc == 's') 
    { 
      exit(0); 
    }
  } 
}
