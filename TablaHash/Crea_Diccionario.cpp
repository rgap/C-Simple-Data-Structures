
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
       if(T[i].state!=0 && T[i].state!=1)
        cout<<"Pos: "<<i<<" Elem: "<<T[i].data<<endl;
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


int Busca_Hash(TH *T, int m, char* k, int i)
{
    cout<<endl<<i<<" "<<m<<" "<<k<<" "<<i;
    int j,rep;
    j = funcion(m,k,strlen(k));
    while(i<m)
    {
        if(T[j].state == 0) {
            cout<<"\nVacio";
            return -1;
        }
        if(T[j].state==1){
            rep=Buscar_Elemento(T[j].der,k);
            if(rep==1)
               return 1;
        }
        if(T[j].state==2){
            if(T[j].data==k)
                return 1;
            else
                rep=Buscar_Elemento(T[j].der,k);
                if(rep==1)
                   return 1;
        }
        i++;
    }
    return -1;
}

int Remove_Hash(TH *T, int m, char* k)
{
    int i;
    i = Busca_Hash(T, m, k, 0);
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
    char resp;
    char*x=new char;
    TH *T;
    cout<<"\nIngresar el tama\xa4o de la tabla: ";
    cin>>m;
    T = Crea_Hash(m);
    while(1)
    {
        cout<<"\nInsertar(i) Buscar(b) Remover(r) Imprimir(p) Prueba(u) Salir(s)\n";
        cin>>resp;
        switch(resp)
        {
            case 'i':
                /*x="plopaa";
                Inserta_Hash(T, m, x);
                x="aaplop";
                Inserta_Hash(T, m, x);
                x="aapwrop";
                Inserta_Hash(T, m, x);
                */
                while(!lexico.eof()) {
                    char*cadena=new char;
                    lexico>>cadena;
                    
                    Inserta_Hash(T,m,x);
                }
                lexico.close();

                break;
            case 'b':
                cout<<"\nIngrese la cadena a buscar en la tabla: ";
                cin>>x;
                i = Busca_Hash(T, m, x, 0);
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
            case 's':
                exit(0);
                break;
      }
   }
}

