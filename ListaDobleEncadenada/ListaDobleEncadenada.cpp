//LISTA DOBLEMENTE ENCADENADA

#include <stdlib.h>
#include <stdio.h>
#include <iostream.h>

typedef struct lista    LE;
typedef struct nodo_lista NO;

struct nodo_lista{
  int elem;
  NO *prox; // guarda la pos. del próx. elem. en la lista
  NO *ante; // guarda la pos.del elem. ant. en la lista */
};
 
struct lista
{
  NO  *head ; // guarda la dir. de primer elem. de lista
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


void Inserta_Elemento(LE *L, int A){
  NO *aux,*ant,*atu;

  if ((aux = (NO *) malloc(sizeof(NO))) != NULL)
  {
    aux->elem = A;
    if (L->head == NULL){
      aux->prox = NULL;
      aux->ante = NULL;
      L->head = aux;
    }
    else{
      atu = L->head;
      ant = NULL;
      while ((atu != NULL) && (atu->elem <= A))
      {
        ant = atu;
        atu = atu->prox;
      }
      
      if (ant == NULL) // insert en primera pos. de lista 
      {
        aux->prox = L->head;
        aux->ante = NULL;
        L->head->ante = aux;
        L->head = aux;
      }
      else
      {
        aux->prox = ant->prox;
        aux->ante = ant;
        if (ant->prox != NULL)
          ant->prox->ante = aux;
        ant->prox = aux;
      }
    }
  }
  else
    exit(0);
  return;
}

void Imprime_Lista(LE *L){

  NO *aux,*atu; 
  int tam=0;
     
  if ((aux = (NO *) malloc(sizeof(NO))) != NULL) 
  {      
      atu = L->head; 
      
      while (atu != NULL) 
      { 
        tam++; 
        cout<<atu->elem<<" ";
        atu = atu->prox; 
        
      } 
      cout<<" de tama\xa4o "<<tam;
   }
} 

int Eliminar_Elemento(LE *L,int A){
    
  NO *aux,*ant,*atu;
  
  if ((aux = (NO *) malloc(sizeof(NO))) != NULL) 
  { 
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
}

main() 
{ 
  system("TITLE Lista Doblemente Encadenada");
  
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
    
    if (opc == 'p') 
      Imprime_Lista(l); 


    if (opc == 's') 
    { 
      //l = (LE *) Vacia_Lista(l); 
      exit(0); 
    } 
  } 
}
