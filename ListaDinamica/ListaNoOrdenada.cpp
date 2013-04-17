#include<iostream.h> 
#include <stdio.h>
#include <stdlib.h>


typedef struct lista    LE; 
typedef struct nodo_lista NO; 

struct nodo_lista 
{ 
  char* elem; 
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
      while (atu != NULL) 
      { 
        ant = atu; 
        atu = atu->prox; 
      } 
      atu->prox = aux; 
      aux->prox = NULL; 
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
     if(atu->elem==A){
        cout<<"\nNumero encontrado!!";
        return 1;
     }
     else 
       atu = atu->prox;        
  } 
  return -1;
}

void Imprime_Lista(LE *L){

  NO *aux,*atu; 
  int tam=0;
      atu = L->head; 
      
      while (atu != NULL) 
      { 
        tam++; 
        cout<<atu->elem<<" ";
        atu = atu->prox; 
        
      } 
      cout<<" de tama\xa4o "<<tam;
} 
  
main() 
{ 
  system("TITLE Lista Dinamica");
  
  int aux_l;  
  LE *l; 
  char*x=new char[20]; 
  char opc; 
  
  l = (LE *) Inicia_Lista(); 
  
  while (1) 
  { 
    cout<<"\n Insertar (i) Eliminar (e) Imprimir (p) Buscar (b) Sair (s) "; 
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

    if(opc=='b'){
      cout<<"\n Ingrese el número entero a buscar "; 
      cin>>x; 
      aux_l = Buscar_Elemento(l,x);     
      if (aux_l == -1) 
        cout<<"Numero no encontrado\n"; 
    }
    if (opc == 's') 
    { 
      l = (LE *) Vacia_Lista(l); 
      exit(0); 
    }
  } 
}

 
