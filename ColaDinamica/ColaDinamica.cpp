#include<iostream.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Cola    CL;
typedef struct Nodo_cola NO;

struct Nodo_cola
{
  int elem;
  NO *prox;
};

struct Cola
{
  NO *ini;
};


CL *Inicia_Cola()
{
   CL *temp;
   if((temp = (CL *) malloc(sizeof(CL))) != NULL)
   {
      temp->ini=NULL;
      return(temp);
   }
   else
     exit(0);
}

void Inserta_Elemento(CL *C,int A)
{
NO *neo,*aux;
if((neo=(NO *) malloc(sizeof(NO))) != NULL)
{
  if((aux = (NO *) malloc(sizeof(NO))) != NULL)
   {          
      if(C->ini==NULL)
      {
         neo->elem=A;
         neo->prox=NULL;
         C->ini=neo;
         return;
      }
      aux=C->ini;
      while(aux->prox != NULL)
         aux=aux->prox;
      neo->elem=A;
      aux->prox=neo;
      neo->prox=NULL;
      return;
   }
   else
      exit(0);
}
else
   exit(0);
}

int Elimina_Elemento(CL *C)
{
NO *aux;
if(C->ini==NULL)
{
   cout<<"La Cola esta vacia";
   return -1;
}
else
{  
   aux=C->ini;
   C->ini=aux->prox;
   aux->prox=NULL;
   cout<<"Elemento eliminado "<<aux->elem;
   return 1;
}   
}

CL *Vacia_Cola(CL *C)
{
   C->ini=NULL;
   return (C);
}


void Imprime_Cola(CL *C)
{
   NO *aux;
   if(C->ini==NULL)
   {
      cout<<"La cola esta vacia";
      return;
   }
   aux=C->ini;
   
   while(aux !=NULL)
   {
      cout<<" "<<aux->elem;
      aux=aux->prox; 
   }
   
   return;
}


main() 
{ 
  system("TITLE Cola Dinamica");     
  CL *C; 
  int N,aux_l,x=0; 
  char opc; 
  
  C = (CL *) Inicia_Cola(); 
  
  while (1) 
  { 
    printf("\n Insertar(i) Eliminar(e) Imprimir(p) Salir(s) "); 
    cin>>opc; 
  
    if (opc == 'i') 
    { 
      printf("\n Ingrese el nuevo número entero "); 
      scanf("%d",&x); 
      Inserta_Elemento(C,x);      
    } 
  
    if (opc == 'e') 
    { 
       aux_l = Elimina_Elemento(C);     
       if(aux_l == -1) 
          printf("n La pila esta vacia\n"); 
       if(aux_l != 1)
          printf("\n Numero eliminado\n");
    }
  
    if (opc == 'p') 
       Imprime_Cola(C); 
  
    if (opc == 's') 
    { 
       C=Vacia_Cola(C);
       exit(0); 
    }
  } 
} 

