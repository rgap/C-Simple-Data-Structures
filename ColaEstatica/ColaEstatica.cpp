#include<iostream.h> 
#include <stdio.h>
#include <stdlib.h>

typedef struct Cola CL;

struct Cola
{
  int ini;
  int fin;
  int cola[10];
};

CL *Inicia_Cola() 
{ 
  CL *temp; 
  int i   ; 
  
  if ((temp = (CL *) malloc(sizeof(CL))) != NULL) 
  {  
     temp->fin=0;
                 
     temp->ini = 0; /* lista vacia */ 
     return(temp); 
  } 
  else 
    exit(0); 
} 


void Inserta_Elemento(CL *C, int A){
  int aux;
  
  aux = (C->fin+1)%10;
  
  if (aux != C->ini){
        
    C->fin = aux;
    C->cola[aux] = A;
  }
  else
    printf(" Cola Llena\n");
}

int Elimina_Elemento(CL* C){   
    int aux;
    aux=(C->fin)%10;
        
    while(aux != C->ini+1){
        
        C->cola[aux]=C->cola[aux-1];
        
        aux=(C->fin+1)%10;
        return 1;            
    }
    return -1;
}

void Imprimir_Cola(CL*C){
     int aux;
     int faux=C->fin;
     aux = faux%10;
  
     while (aux != C->ini){
        
       faux = aux-1;
       cout<<C->cola[aux]<<" ";
       aux = faux%10;
     }
}

main() 
{  
  system("TITLE Cola Estatica");
  
  CL *C; 
  int N,aux_l,x; 
  char opc; 

  
  C = (CL *) Inicia_Cola(); 
  
  while (1) 
  { 
    cout<<"\n Inserta (i) Elimina (e) Imprimir (p) Salir (s) "; 
    cin>>opc;

    if (opc == 'i') 
    { 
      cout<<"\n Ingrese el nuevo elemento entero "; 
      cin>>x;
      Inserta_Elemento(C,x);      
    } 

    if (opc == 'e') 
    { 
      aux_l = Elimina_Elemento(C);  
      if(aux_l==-1)
       cout<<"\n La Pila esta vacia";
    } 

    if (opc == 'p') 
      Imprimir_Cola(C); 

    if (opc == 's') 
    { 
      //l = (LE *) Vacia_Lista(l); 
      exit(0); 
    } 
  } 
}

 




