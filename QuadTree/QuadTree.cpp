#include <iostream.h>

typedef struct PQNo PQNo;

struct PQNo {
		PQNo *filhos[4];
		char info[20];
		int x;
		int y;
};

PQNo*Inicia_quadtree(){
  PQNo*temp;
  if ((temp = (PQNo *) malloc(sizeof(PQNo))) != NULL) 
  {  
    temp->x=0;
    temp->y=0;
    for(int i=0;i<4;i++)
       temp->filhos[i]=NULL;
    return(temp); 
  } 
  else 
    exit(0); 
}

int retorna_quadrante(PQNo *p, PQNo *r)
{
		if (p->x < r->x)
			if (p->y < r->y)
				return 3;
			else	return 0;
		else
			if (p->y < r->y)
				return 2;
			else	return 1;
}

PQNo *PtInsere(PQNo **raiz, PQNo *p){
		PQNo *f, *r;
		int q;

		if (*raiz == NULL) {	/* Arbol está vacio */
			*raiz = p;
			return p;
		}
	/* Desciende en árbol hasta encontrar cuadrante vacío  o un punto igual */
		r = *raiz;
		while((r != NULL) && !(r->x == p->x && r->y == p->y)){
   			f = r;	/* Guarda o pai */
      		              q = retorna_quadrante(p, r);
			r = r->filhos[q];
		}
		if (r == NULL) {
   			f->filhos[q] = p;
			return p;
		}
		return NULL;
}

main() 
{ 
  int aux_l;  
  PQNo *root; 
  int x=0; 
  char opc; 
  
  root= (PQNo *) Inicia_quadtree(); 
  PQNo=
  
  while (1) 
  { 
    cout<<"\n Insertar (i)  Sair (s) "; 
    cin>>opc;

    if (opc == 'i') 
    { 
      cout<<"\n Ingrese el nuevo elemento entero "; 
      cin>>x;
      PtInsere(root,x,true);      
    } 
    /*
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
    */
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


