#include<iostream.h>  

typedef struct lista    LE; 
typedef struct nodo_lista NO; 
typedef struct vacio    VC; 

struct vacio 
{ 
  int  ultimo; /* guarda a última posición ocupada del vector pos_vac */ 
  int *pos_vac; 
}; 

struct nodo_lista        
{ 
  int elem; 
  int prox; /* guarda la posición del próximo elemento en la lista */ 
}; 
  
struct lista 
{ 
  int  head ; /* marca la posición del primer elemento de la lista */ 
  VC  *vac  ; /* guarda posiciones vacías */ 
  NO  *nodo   ; 
}; 
  
LE *Inicia_Lista(int N) 
{ 
  LE *temp; 
  int i   ; 
  
  if ((temp = (LE *) malloc(sizeof(LE))) != NULL) 
  { 
    if ((temp->nodo = (NO *) malloc(N*sizeof(NO))) != NULL) 
    { 
      if ((temp->vac = (VC *) malloc(N*sizeof(VC))) != NULL) 
      { 
        if ((temp->vac->pos_vac = (int *) malloc(N*sizeof(int))) != NULL) 
        { 
          temp->vac->ultimo = N-1; 
  
          for (i = 1; i <= N; i++) 
            temp->vac->pos_vac[i-1] = N-i; 
  
          temp->head = -1; /* lista vacia */ 
          return(temp); 
        } 
        else 
          exit(0); 
      } 
      else 
        exit(0); 
    }          
    else    
      exit(0); 
  } 
  else 
    exit(0); 
} 
  
void Inserta_Elemento(LE *L, int A) 
{ 
  int i,ant; 
  

  if (L->head == -1) /* Lista esta vacía */ 
  { 
    L->head = 0; 
    L->nodo[0].elem = A; 
    L->nodo[0].prox = -1; 
    (L->vac->ultimo)--;    
  } 
  else 
  { 
    i = L->head; 
    ant = -1; 
    while ((i != -1) && (L->nodo[i].elem <= A)) 
    { 
      ant = i; /* guarda la posicion del anterior */ 
      i = L->nodo[i].prox; 
    } 
    //L->nodo[0].elem;
                           //4
    L->nodo[L->vac->pos_vac[L->vac->ultimo]].elem = A; 

    if (ant == -1) /* incluir al inicio de la lista */ 
    { 
      L->nodo[L->vac->pos_vac[L->vac->ultimo]].prox = L->head; 
      L->head = L->vac->pos_vac[L->vac->ultimo]; 
    } 
    else 
    { 
      L->nodo[L->vac->pos_vac[L->vac->ultimo]].prox =  L->nodo[ant].prox; 
      L->nodo[ant].prox = L->vac->pos_vac[L->vac->ultimo]; 
    } 
    (L->vac->ultimo)--;    
  } 
  return; 
}

  
/* Ejercicios: Implementar las funciones que faltan */ 

int Elimina_Elemento(LE *L, int A){
   int i,j,temp,k;
    
   if (L->head == -1){    
       return -1;
   }
   else 
   { 
       i = L->head;    
       j = L-> head;

       while(i!=-1){
          if(L->nodo[i].elem==A){  
             k=i;           
             while(k!=-1){
                L->nodo[k].elem=L->nodo[k+1].elem;
                
                k=L->nodo[k].prox; 
             }  
             L->head=k;      
          }
          i=L->nodo[i].prox; 
       }   
       i = L->head;
       
       while(i!=-1){             
          if(L->nodo[i].elem==A){
             if(i==L->head){
                 L->head=L->nodo[i].prox; 
                 
                 return 1;
             }
             else{
             while(j!=-1){
                if(L->nodo[j].prox==i){
                   L->nodo[j].prox=L->nodo[i].prox;   
                   
                   return 1;
                }
                j=L->nodo[j].prox;
             }
             }
             
          }
          i=L->nodo[i].prox; 
       }
       return -1;
        
   }    
}

void Imprime_Lista(LE *l) 
{ 
  int i; 
  
  i = l->head; 
  cout<<"\n Elementos "; 
  while (i != -1) 
  { 
    
    cout<<l->nodo[i].elem<<" "; 
    i = l->nodo[i].prox; 

  } 
} 
  
main() 
{ 
  system("TITLE Lista Estatica");
  
  int N,i;
  
  LE *l; 
  int aux_l,x=0; 
  char opc; 
  
  cout<<"Ingrese el num. max. elem. en la lista\n"; 
  cin>>N; 
  
  l = (LE *) Inicia_Lista(N); 
  for(i=0;i<N;i++)
     cout<<l->vac->pos_vac[i]<<" ";
     
  
    
  while (1) 
  { 
    cout<<"\n Insertar(i) Eliminar(e) Imprimir(p) Salir(s) "; 
    cin>>opc; 
  
    if (opc == 'i') 
    { 
      cout<<"\n Ingrese el nuevo número entero "; 
      cin>>x; 
      Inserta_Elemento(l,x);      
    } 
  
    if (opc == 'e') 
    { 
      printf("\n Ingrese el núm. entero a buscar "); 
      scanf("%d",&x); 
      aux_l = Elimina_Elemento(l,x);     
      if (aux_l == -1) 
        printf("Numero no encontrado\n"); 
    }
  
    if (opc == 'p') 
      Imprime_Lista(l); 
  
    if (opc == 's') 
    { 
     /* l = (LE *) Vacia_Lista(l); */
      exit(0); 
    } 
  } 
} 
