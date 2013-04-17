#include <iostream.h>
#include <stdlib.h>
typedef int tElemento;

typedef struct Celda{
	tElemento elemento;
	struct Celda *siguiente;
}celda;

typedef celda *tPosicion;
typedef celda *tLista;

tLista crear ()
{
   tLista l;

   l = (tLista)malloc(sizeof(celda));
   if (l == NULL)
   	cerr<<"Memoria Insuficiente.";
   l->siguiente = NULL;
   return l;
}

void destruir (tLista l)
{
   tPosicion p;

   for (p = l; l != NULL; p = l){
   	l = l->siguiente;
   	free(p);
   }
}
   
tPosicion fin (tLista l)   
{
   tPosicion p;

   p=l;
   while (p->siguiente != NULL) {
      p = p->siguiente;
   }
   return p;
}

void insertar (tElemento x, tPosicion p, tLista l)
{
   tPosicion q;

   q = (tPosicion)malloc(sizeof(celda));
   if (q == NULL)
	cerr<<"Memoria Insuficiente.";
   q->elemento = x;
   q->siguiente = p->siguiente;
   p->siguiente = q;
}

tPosicion siguiente (tPosicion p, tLista l)
{
   if (p->siguiente==NULL) {
 	cerr<<"No hay siguiente de fin.";
   }
   return p->siguiente;
}

tPosicion primero (tLista l)
{
   return l;
}

tPosicion posicion (tElemento x, tLista l)
{
   tPosicion p;
   int encontrado;

   p = primero(l);
   encontrado = 0;
   while ((p->siguiente != NULL) && (!encontrado)) {
	if (p->siguiente->elemento == x)
		encontrado=1;
	else p = p->siguiente;
   }
   return p;
}

tElemento elemento (tPosicion p, tLista l) 
{
   if (p->siguiente == NULL) {
 	 cerr<<"Error: posicion fin(l).";
   }
   return p->siguiente->elemento;
}

void borrar (tPosicion p, tLista l)
{
   tPosicion q;	

   if (p->siguiente == NULL)
	cerr<<"Error: posicion fin(l).";
   q = p->siguiente;
   p->siguiente = q->siguiente;
   free(q);
}




