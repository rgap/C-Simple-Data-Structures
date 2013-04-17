#include<iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct Lista LG;
typedef struct nodo_lista NO ;

struct nodo_lista{
  int row;
  int col;
  int elem;
  NO *prox;
};

struct Lista{
  NO*head;
};

LG* Inicia_Lista(){
    LG*temp;
    if((temp=(LG*)malloc(sizeof(LG)))!= NULL){
         temp->head=NULL;
         return (temp);

    }
    else
      exit(0);
}

LG* Suma_Lista(LG*L1,LG*L2){
    NO*aux1,*aux2,*aux3;
    LG *L3;
    
    aux1=L1->head;
    aux2=L2->head;
    aux3=L3->head;
    if(aux1==NULL && aux2==NULL){
       cout<<"\n No hay listas... ";            
    }
    if(L1->head!=NULL && L2->head==NULL){
       return L1;
    }
    if(L2->head!=NULL && L1->head==NULL){
       return L2;
    }
    else{
         while(aux1!=NULL && aux2!=NULL){
           if(aux1->row==aux2->row && aux1->col==aux2->col){
            if(aux3==NULL){
                aux3->elem=aux1->elem + aux2->elem;
                L3->head=aux3;
            }

            else{
             if(aux1->prox==NULL && aux2->prox==NULL){
                 return L3;
             }
             if(aux1->prox==NULL){
               while(aux1->prox!=NULL){
                  aux3->elem=aux1->elem;
                  aux3=aux3->prox;
                  aux1=aux1->prox;
                  return L3;                      
               }
             }
             if(aux2->prox==NULL){
               while(aux2->prox!=NULL){
                  aux3->elem=aux2->elem;
                  aux3=aux3->prox;
                  aux2=aux2->prox;
                  return L3;
               }
             }          
            }
            aux3->elem=aux1->elem + aux2->elem;
            aux3=aux3->prox;
           }
           aux1=aux1->prox;
           aux2=aux2->prox;

         }
    }
}

main(){

   LG *L;
   LG *LC;
   LG *LS;
   char opc;
   int aux_l,x;
   L = (LG *) Inicia_Lista();
   LC = (LG *) Inicia_Lista();
   LS = (LG *) Inicia_Lista();

   while (1)
  {
    cout<<"\n Llenar(l) Suma (u) Salir (s)";
    cin>>opc;

    if (opc == 'u')
    {
      LS=Suma_Lista(L,LC);
    }
    if(opc=='l'){
    }
    
  }

  getch();
}
