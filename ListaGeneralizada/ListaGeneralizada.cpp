#include<iostream.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo_general_list NO;
typedef union  coef_polinomio  COEF;

union coef_polinomio
{
  float elem;
  NO   *poli;
};

struct nodo_general_list
{
  int   tag;
  int   expo;
  COEF *coef; 
  NO   *prox;
};

COEF *Inicia_Lista()
{
   COEF *temp;
   if((temp = (COEF *) malloc(sizeof(COEF))) != NULL)
   {
      temp->prox=NULL;
      return(temp);
   }
   else
     exit(0);
}

/*
return verifica_coeficiente(NO *poli)
{
  if (poli->tag == 0)
    printf("Coeficiente es %f \n",poli->coef->elem);
  else
    printf("Coeficiente es un nuevo polinomio \n");
}
*/
