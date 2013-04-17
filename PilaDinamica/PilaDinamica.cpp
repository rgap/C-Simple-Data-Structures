#include<iostream.h> 
#include <stdio.h>
#include <stdlib.h>

typedef struct Pila  PL;
typedef struct Nodo_pila NO ;

struct Nodo_pila
{
  int elem;
  NO *prox;
};

struct Pila
{
  NO *top;
};

PL *Inicia_Pila() 
{ 
  PL *temp;
  
  if ((temp = (PL *) malloc(sizeof(PL))) != NULL) 
  {
      temp->top=NULL;  
      return(temp); 
  } 
  else 
    exit(0); 
} 

/* Ejercicio: Implementar las operaciones PUSH y POP */

void PUSH(PL *P,int A)
{
    NO *aux;
    aux=P->top;
    
    if ((aux = (NO *) malloc(sizeof(NO))) != NULL) 
    {
       aux->prox=P->top;
       aux->elem=A;
       P->top=aux;
    }
}

int POP(PL*P)
{
    NO *aux;
    
    aux = P->top;
    
    if (aux==NULL)
   	    return -1;
    else{
   	    P->top=aux->prox;
    }
}

void Imprime_Pila(PL *P) 
{ 
    NO *aux;
    aux=P->top;
    cout<<"\n Elementos "<<endl; 

    while(aux!=NULL){
      cout<<"   "<<aux->elem<<endl;
      aux=aux->prox;
    }
} 

main() 
{  
  system("TITLE Pila Dinamica");
  
  PL *P; 
  int N,aux_l,x; 
  char opc; 

  
  P = (PL *) Inicia_Pila(); 
  
  while (1) 
  { 
    cout<<"\n PUSH (u) POP (o) Imprimir (p) Salir (s) "; 
    cin>>opc;

    if (opc == 'u') 
    { 
      cout<<"\n Ingrese el nuevo elemento entero "; 
      cin>>x;
      PUSH(P,x);      
    } 

    if (opc == 'o') 
    { 
      aux_l = POP(P);  
      if(aux_l==-1)
       cout<<"\n La Pila esta vacia";
    } 

    if (opc == 'p') 
      Imprime_Pila(P); 

    if (opc == 's') 
    { 
      //l = (LE *) Vacia_Lista(l); 
      exit(0); 
    } 
  } 
}

 
