
#include "listah.h"

typedef tLista *TablaHash;

#define VACIO NULL
int NCASILLAS=312;

TablaHash CrearTablaHash () 
{
   TablaHash t;
   register i;

   t=(TablaHash)malloc(NCASILLAS*sizeof(char *));
   if (t==NULL) 
      cerr<<"Memoria Insuficiente.";

   for (i=0;i<NCASILLAS;i++)
      t[i]=VACIO;

   return t;
}

void DestruirTablaHash (TablaHash t)
{
   register i;

   for (i=0;i<NCASILLAS;i++)
      destruir(t[i]);

   free(t);
} 

int Hash (char *cad)
{
   int valor;
   char *c;

   for (c=cad,valor=0;*c;c++)
      valor+=(int)(*c);

   return(valor%NCASILLAS);
}

int MiembroHash (char *cad,TablaHash t)
{
   tPosicion p;
   int enc;	
   int pos=Hash(cad);
   
   p=primero(t[pos]);
   enc=0;
   while (p!=fin(t[pos]) && !enc) {
      if (strcmp(cad,elemento(p,t[pos]))==O)
         enc=1;
      else
         p=siguiente(p,t[pos]);
   }

   return enc;
}

void InsertarHash (char *cad,TablaHash t)
{
   int pos;

   if (MiembroHash(cad,t))
      return;

   pos=Hash(cad);
   insertar(cad,primero(t[pos]),t[pos]);
}

void BorrarHash (char *cad,TablaHash t)
{
   tPosicion p;
   int pos=Hash(cad);

   p=primero(t[pos]);
   while (p!=fin(t[pos]) && !strcmp(cad,elemento(p,t[pos])))
      p=siguiente(p,t[pos]));

   if (p!=fin(t[pos]))
      borrar(p,t[pos]);
}


