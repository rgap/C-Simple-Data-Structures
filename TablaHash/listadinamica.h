#include <iostream.h>
#include <stdlib.h>
typedef struct lista    LE; 
typedef struct nodo_lista NO; 

struct nodo_lista 
{ 
  char* elem; 
  int state;
  NO *prox; /* guarda la posicion del proximo elemento en la lista */ 
}; 
  
struct lista 
{ 
  NO *head; /* guarda la direccion del primer elemento de la lista */ 
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

LE *Vacia_Lista(LE*L) 
{ 
    NO*atu,*aux;
    atu=L->head;                  
    while (atu != NULL) 
    { 
        aux=atu;
        atu=atu->prox;
        free(aux);
    }  
    return L; 
} 

void Inserta_Elemento(LE *L, char* A) 
{ 
  NO *aux,*ant,*atu; 

  if ((aux = (NO *) malloc(sizeof(NO))) != NULL) 
  { 
    aux->elem = A; 
    if (L->head == NULL) 
    { 
      aux->prox = NULL; 
      L->head = aux; 
    } 
    else 
    { 
      atu = L->head; 
      ant = NULL; 
      while ((atu != NULL) && (atu->elem <= A)) 
      { 
        ant = atu; 
        atu = atu->prox; 
      } 
      if (ant == NULL) /* insertar en la primera posición de la lista */ 
      { 
        aux->prox = L->head; 
        L->head = aux; 
      } 
      else 
      { 
        aux->prox = ant->prox; 
        ant->prox = aux; 
      } 
    } 
  } 
  else 
    exit(0); 
  return; 
} 

int Eliminar_Elemento(LE *L,char* A){
    
  NO *aux,*ant,*atu; 
      if(L->head == NULL){
         return -1;
      }     
      else{
           atu=L->head;
           
           if(atu->elem==A){
              L->head = atu-> prox;
              return 1;
           }

           while (atu != NULL) 
           { 
             if(atu->elem==A){
                ant->prox=atu->prox;
                atu->prox=NULL;
                free(atu);
                return 1;
             }
             else{
                ant=atu;
                atu=atu->prox;
             }
           }  
           return -1;
      } 
}

int Buscar_Elemento(LE *L,char* A){
    
  NO *aux,*atu; 
  atu = L->head; 
  while (atu != NULL) 
  { 
     if(strcmp(A,atu->elem)==0){
        return 1;
     }
     else 
       atu = atu->prox;        
  } 
  return -1;
}

void Imprime_Lista(LE *L){

  NO *aux,*atu; 
       
      atu = L->head; 
      cout<<endl;
      while (atu != NULL) 
      { 
        cout<<atu->elem<<" ";
        atu = atu->prox; 
        
      } 
} 



 
