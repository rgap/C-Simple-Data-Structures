#include <iostream.h>

typedef struct pat_nodo *PT;

struct pat_nodo {
    char key;
    int bit;
    PT *hijos[30];
};

PT*Inicia_Arbol(){
  PT*temp;
  if ((temp = (PT *) malloc(sizeof(PT))) != NULL) 
  { 
    temp->hijos=NULL; 
    return(temp); 
  } 
  else 
    exit(0); 
}

PT *Insert_tree(PT *root, char*palabra)
{
  char ini=palabra[0];
  
  
}

main() 
{ 
  int aux_l;  
  PT *root; 
  int x=0; 
  char opc; 
  
  root= (PT*)Inicia_Arbol(); 
  
  while (1) 
  { 
    cout<<"\n Insertar (i) Eliminar (e) Imprimir (p) Buscar (b) Sair (s) "; 
    cin>>opc;

    if (opc == 'i') 
    { 
      cout<<"\n Ingrese el nuevo elemento entero "; 
      cin>>x;
      insere(root,x,true);      
    } 

    if (opc == 'e') 
    { 
      cout<<"\n Ingrese el número entero a buscar "; 
      cin>>x; 
      root = remove(root,x,true);     
      if (aux_l == -1) 
        cout<<"Numero no encontrado\n"; 
    } 

    if (opc == 'p') {
      cout<<"en_orden: ";
      en_orden(root); 
    }
    /*
    if(opc=='b'){
      cout<<"\n Ingrese el número entero a buscar "; 
      cin>>x; 
      root=Busqueda_binaria(root,x);     
    }
    */
    if (opc == 's') 
    { 
      exit(0); 
    }
  } 
}
