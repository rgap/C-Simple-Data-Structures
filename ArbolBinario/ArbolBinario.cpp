#include <iostream.h>

typedef struct Nodo BT;

struct Nodo
{
      int data;
      BT *fesq;
      BT *fdir;
};

BT*Inicia_Arbol(){
  BT*temp;
  if ((temp = (BT *) malloc(sizeof(BT))) != NULL) 
  { 
    temp->fesq=NULL; 
    temp->fdir=NULL;
    temp->data=NULL;
    return(temp); 
  } 
  else 
    exit(0); 
}

void en_orden(BT *root){
      if (root != NULL){
            en_orden(root->fesq);
            printf("%d  ",root->data);
            en_orden(root->fdir);
      }
}
void pos_orden(BT *root){
      if (root != NULL) {
            pos_orden(root->fesq);
            pos_orden(root->fdir);
            printf("%d  ",root->data);
      }
}
void pre_orden(BT *root){
      if (root != NULL) {
            printf("%d  ",root->data);
            pre_orden(root->fesq);
            pre_orden(root->fdir);
      }
}

BT *Insert_tree(BT *root, int k)
{
      if(root->data==NULL){
            root->data=k;    
            return root;       
      }
      BT *nuevo,*y = NULL; 
      nuevo = (BT *) malloc(sizeof(BT));
      nuevo->fesq = nuevo->fdir = NULL;
      nuevo->data = k;
      while(root != NULL)
      {
            y = root;
            if ( k  <  root->data)
                  root = root->fesq;
            else
                  root = root->fdir;
      }
      if ((y != NULL) && (k < y->data))
            y->fesq = nuevo;
      else
            y->fdir = nuevo;
      return(nuevo);
}

BT* Busqueda_binaria(BT *root, int k)
{
   while (root != NULL)
   {
         if (k < root->data)
               root = root->fesq;
         else if (k > root->data)
                root = root->fdir;
         else
         {
              printf("Elemento encontrado");
              return(root);
         }
   }
   printf("Elemento no encontrado"); 
   return(NULL);
}

int height_r(BT*root, int curHeight, int curMax) {             
    if(root != NULL) {
        if(curHeight > curMax){ 
            curMax = curHeight; 
        }
        // Traverse the left subtree
        if(root->fesq != NULL) {
            curMax = height_r(root->fesq, curHeight + 1, curMax);
        }
        // Traverse the right subtree
        if(root->fdir != NULL) {
            curMax = height_r(root->fdir, curHeight + 1, curMax);
        }
    }
    return curMax;
}

int height(BT *root) {
	if(root==NULL)
		return -1;
    int curHeight = 0;
    int curMax = 0;
    return height_r(root, curHeight, curMax);
}

int es_AVL(BT*root){
    int hI;
    int hD;
    int FB;
    if (root != NULL){
         es_AVL(root->fesq);

         hI=height(root->fesq);
         hD=height(root->fdir);
         FB=hI-hD;
         if(FB!=0 && FB!=1 && FB!=-1)
            return 0;
         
         es_AVL(root->fdir);
    }
}

int main() 
{ 
  int aux_l;  
  BT *root; 
  int x=0; 
  char opc; 
  
  root= (BT *) Inicia_Arbol(); 
  
  while (1) 
  { 
    cout<<"\n Insert(i) Elim(e) Impr(p) BusqBin(b) altura(h) esAVL?(a) es2(c) Sair(s)"; 
    cin>>opc;

    if (opc == 'i') 
    { 
      cout<<"\n Ingrese el nuevo elemento entero "; 
      cin>>x;
      Insert_tree(root,x);      
    } 
    /*
    if (opc == 'e') 
    { 
      cout<<"\n Ingrese el número entero a buscar "; 
      cin>>x; 
      aux_l = Eliminar_Elemento(root,x);     
      if (aux_l == 0) 
        cout<<"Numero no encontrado\n"; 
      else
        cout<<"Numero eliminado\n";
    } 
    */

    if (opc == 'p') {
      cout<<"\n raiz: "<<root->data;
      cout<<"\nen_orden: ";//IRD
      en_orden(root); 
      cout<<"\npos_orden: ";//IDR
      pos_orden(root);
      cout<<"\npre_orden: ";//RID
      pre_orden(root);
}
    if(opc=='b'){
      cout<<"\n Ingrese el número entero a buscar "; 
      cin>>x; 
      root=Busqueda_binaria(root,x);     
    }
    if(opc=='a'){
      aux_l=es_AVL(root);
      if(aux_l==0)
         cout<<"\nNo es AVL";  
      else
         cout<<"\nSi es AVL";  
    }
    
    if(opc=='h'){
       cout<<"\naltura = "<<height(root);
    }
    if (opc == 's') 
    { 
      exit(0); 
    }
  } 
}

