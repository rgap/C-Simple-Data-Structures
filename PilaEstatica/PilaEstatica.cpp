//LISTA DOBLEMENTE ENCADENADA

#include <stdlib.h>
#include <stdio.h>
#include <iostream.h>

typedef struct Pila PL;

struct Pila
{
    int top ;
    int max ; /* Almacena el tamaño máx.de la pila */
    int *elem; 
};

PL *Inicia_Pila(int N) 
{ 
  PL *temp; 
  int i   ; 
  
  if ((temp = (PL *) malloc(sizeof(PL))) != NULL) 
  { 
    if((temp->elem = (int *) malloc(sizeof(PL))) != NULL)
    {  
       temp->max = N; 
       temp->elem[0]=NULL;
                 
       temp->top = -1; /* lista vacia */ 
     return(temp); 
    }
    else
      exit(0);
  } 
  else 
    exit(0); 
} 

void Imprime_Pila(PL *P) 
{ 
  int temp;
  cout<<"\n Elementos "<<endl; 
  temp=P->top;
  while (temp >= 0) 
  { 
    cout<<"    "<<P->elem[temp]<<endl; 
    temp--;
  } 

} 

void PUSH(PL *P,int A)
{
    if (P->top < P->max - 1)
        P->elem[++(P->top)] = A;
    else
        printf("Pila llena\n");
}

int POP(PL*P)
{
    if(P->top>=0){
        P->elem[P->top];
        P->top--;
        return 1;
    }
    else{
        return -1;
    }
}

/* Implementar las otras operaciones */

main() 
{  
  system("TITLE Pila Estatica");
  
  PL *P; 
  int N,aux_l,x; 
  char opc; 
  
  cout<<"Ingrese el num. max. elem. en la Pila\n"; 
  cin>>N; 
  
  P = (PL *) Inicia_Pila(N); 
  
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
