
#include <fstream.h>
#include "listadinamica.h"

using namespace std;

typedef struct tabla TH;
struct tabla
{
    char*data;
    int state; /* 0 para VACIO, 1 para REMOVIDO e 2 para OCUPADO */
    LE*der;
};

TH *Crea_Hash(int m)
{
   TH *temp;
    int i;
   if((temp = (TH*)malloc(m*sizeof(TH))) != NULL)
   {
        for(i = 0; i < m; i++){
           temp[i].state = 0;
           temp[i].der=NULL;
        }
        return temp;
   }
   else
        exit(0);
}

int funcion(int tablesize,char *a, int stringsize)
{
  int hashval, j;

  hashval = (int) a[0];
  for (j = 1; j < stringsize; j++)
    hashval += (int) a[j];

  return(hashval % tablesize); /* suponiendo que tablesize es global */
}
void Imprime_Tabla(TH*T,int m){
     cout<<endl;
     for(int i=0;i<m;i++){
       if(T[i].state!=0 && T[i].state!=1){
         char*t=T[i].data;
         cout<<"Pos: "<<i<<" Elem: "<<t<<endl;
        }
     }
}

void Listas_Colisiones(TH*T,int m){
     cout<<endl;
     for(int i=0;i<m;i++){
       if(T[i].der!=NULL && T[i].state!=0){
          cout<<"Pos: "<<i<<" Elem: "<<T[i].data<<endl;
          Imprime_Lista(T[i].der);
       }
     }
}

//m=tamaño de T
void Inserta_Hash(TH *T, int m, char* k)
{
    int j;
    j = funcion(m,k,strlen(k));
    if(T[j].state == 0 || T[j].state ==1)
    {
        T[j].data = k;
        T[j].state = 2;
        cout<<"\nElemento insertado con exito!";
        return;
    }
    if(T[j].state ==2){
            if(T[j].der==NULL){
               LE*L;
               L = (LE *) Inicia_Lista();
               T[j].der=L;
               Inserta_Elemento(L,k);
               cout<<"\nElemento insertado con exito!";
               return;
            }
            else{
               Inserta_Elemento(T[j].der,k);
               cout<<"\nElemento insertado con exito!";
               return;
            }
    }
    cout<<"\nTabla llena!";
}

int Localizar1 (char *x,TH*T,int tam)
{
   int ini,i,aux;
   ini=funcion(tam,x,strlen(x));
   for (i=0;i<tam;i++) {
      aux=(ini+i)%tam;
      if (T[aux].state==0 || T[aux].state==1)
         return aux;
      if (!strcmp(T[aux].data,x))
         return aux;
   }
   return ini;
}


void InsertarHash (char *cad,TH*T,int tam) 
{
   int pos;

   if (!cad) {
      cerr<<"Cadena inexistente.";
      return;
   }   
   pos=Localizar1(cad,T,tam);
   if (T[pos].state==0 || T[pos].state==1) {
          strcpy(T[pos].data,cad);
   } 
   else{
       cerr<<"Tabla Llena. \n";
   }
}

int Busca_Hash(TH *T, int m, char* k)
{
    
    int j,rep;
    j = funcion(m,k,strlen(k));
    if(T[j].state == 0) {
         return -1;
    }
    if(T[j].state==1 || T[j].state==2){
         cout<<endl<<T[j].data<<" "<<k;
         if(strcmp(T[j].data,k)==0){
            
            return 1;
            }
         else{
            cout<<endl<<T[j].data<<" "<<k;
            return Buscar_Elemento(T[j].der,k); 
        }
    }
}



int Remove_Hash(TH *T, int m, char* k)
{
    int i;
    i = Busca_Hash(T, m, k);
    if(i == -1)
        return -1;
    else
    {
        T[i].state = 1;
        return 1;
    }
}
main()
{
    ifstream lexico("LexicoES.txt");
    int m,i;
    int u;
    char resp;
    char*x=new char;
    TH *T;
    cout<<"\nIngresar el tama\xa4o de la tabla: ";
    cin>>m;
    T = Crea_Hash(m);
    while(1)
    {
        cout<<"\nInsertar(i) Buscar(b) Remover(r) Imprimir(p) Colisiones(c) Salir(s)\n";
        cin>>resp;
        
        if(resp=='i'){
                /*x="plopaa";
                Inserta_Hash(T, m, x);
                x="aaplop";
                Inserta_Hash(T, m, x);
                x="aapwrop";
                Inserta_Hash(T, m, x);
                */
                
                while(!lexico.eof()) {
                    char*cadena=new char[20];
                    delete(cadena);
                    lexico>>cadena;
                    Inserta_Hash(T,m,cadena);
                    
                }
                
                lexico.close();
                cout<<endl<<T[78].data;
                /* 
                
                char*cadena=new char[20];
                cout<<"\nIngrese la cadena: ";
                cin>>cadena;
                Inserta_Hash(T,m,cadena);
                delete(cadena);
                */
        }
        switch(resp)
        {
            case 'b':
                 cout<<endl<<T[78].data;
                cout<<"\nIngrese la cadena a buscar en la tabla: ";
                cin>>x;
                i = Busca_Hash(T, m, x);
                if(i == -1)
                    cout<<"\nCadena no encontrada!";
                else
                    cout<<"\nCadena encontrada!";
                break;

            case 'r':
                cout<<"\nIngrese la cadena a eliminar de la tabla: ";
                cin>>x;
                i = Remove_Hash(T, m, x);
                if(i == -1)
                    cout<<"\nCadena no encontrada!";
                else
                    cout<<"\nCadena eliminada con éxito!";
                break;
            case 'p':
                Imprime_Tabla(T,m);
                break;
            case 'c':
                 Listas_Colisiones(T,m);
                 break;
            case 's':
                exit(0);
                break;
      }
   }
}

