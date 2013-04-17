#include<iostream.h> 
#include <stdio.h>
#include <stdlib.h>

typedef struct lista LE;
typedef struct nodo_lista NO;

struct nodo_lista
{
   int elem;
   NO *prox; /* guarda la posicion del proximo elemento en la lista */
   NO *ante; /* guarda la posicion del elemento anterior en la lista */
};

struct lista
{
    NO *head ; /* guarda la dirección del primer elemento de la lista */
};

LE *Inicia_Lista(void) 
{ 
  LE *temp; 

  if ((temp = (LE *) malloc(sizeof(LE))) != NULL) 
  {
       temp->head = NULL; 
       return(temp); 
  } 
  else 
    exit(0); 
} 


void Inserta_Elemento(LE *L, int A)
{
    NO *aux,*ant,*atu;

    if ((aux = (NO *) malloc(sizeof(NO))) != NULL)
    {
        aux->elem = A;
        if (L->head == NULL)
        {
            aux->prox = aux;
            aux->ante = aux;
            L->head = aux;
        }
        else
        { /* Inserta en la pos. anterior de head */
            aux->prox = L->head;
            aux->ante = L->head->ante;
            L->head->ante->prox = aux;
            L->head->ante = aux;
        }
    }
    else
        exit(0);
    return;
}

int Eliminar_Elemento(LE *L,int A){
    
  NO *aux,*ant,*atu;
  
  if ((aux = (NO *) malloc(sizeof(NO))) != NULL) 
  { 
      aux=L->head;
      if(L->head == NULL){
         return -1;
      }     
      if(L->head->elem==A){
        if(L->head->prox==L->head){
             L->head=NULL;          
             return 1;
        }
        else{
             L->head=L->head->prox;
             aux->ante->prox = L->head;
             L->head->ante = aux->ante;
             return 1;
        } 
      }  
      else{
          while(aux->elem!=A){
             aux=aux->prox;
          }
          if(aux->prox==L->head){
              aux->ante->prox = L->head;
              L->head->ante = aux->ante;       
              return 1;
          }
          else{     
              aux->ante->prox=aux->prox;
              aux->prox->ante=aux->ante;
              return 1;
          }
      } 
      return -1;    
  }
}

void Imprime_Lista(LE *L){

  NO *aux,*atu,*tem; 
  
     if(L->head==NULL){
        printf("\nLa lista esta vacia\n");
     }    
     else{
        aux=L->head;
        
        printf("\nElementos: ");
        printf("%d ",aux->ante->elem);
        
        while(aux->prox!=L->head){
           printf("%d ",aux->elem);
           aux=aux->prox;
        }
     }

} 

  
/* Ejercicios: Implementar las funciones que faltan */ 
  
main() 
{ 
  system("TITLE Lista Circular");
  
  int aux_l;  
  LE *l; 
  int x=0; 
  char opc; 
  
  l = (LE *) Inicia_Lista(); 
  
  while (1) 
  { 
    cout<<"\n Insertar (i) Eliminar (e) Imprimir (p) Sair (s) "; 
    cin>>opc;

    if (opc == 'i') 
    { 
      cout<<"\n Ingrese el nuevo elemento entero "; 
      cin>>x;
      Inserta_Elemento(l,x);      
    } 

    if (opc == 'e') 
    { 
      cout<<"\n Ingrese el número entero a buscar "; 
      cin>>x; 
      aux_l = Eliminar_Elemento(l,x);     
      if (aux_l == -1) 
        cout<<"Numero no encontrado\n"; 
    } 

    if (opc == 'p'){ 
      Imprime_Lista(l); 
    }

    if (opc == 's') 
    { 
      //l = (LE *) Vacia_Lista(l); 
      exit(0); 
    } 
  } 
}

