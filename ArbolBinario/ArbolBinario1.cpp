#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct nodoB nodo;

struct nodoB
{
   int dato;
   nodo*izq;
   nodo*der;
};

void imp_in(nodo*r)
{
   if(r!=NULL)
   {
     imp_in(r->izq);
     cout<<r->dato<<" ";
     imp_in(r->der);
   }
}

void imp_pre(nodo *r)
{
   if(r!=NULL)
   {
      cout<<r->dato<<" ";
      imp_pre(r->izq);
      imp_pre(r->der);
   }
}

void imp_pos(nodo *r)
{
   if(r!=NULL)
   {
      imp_pos(r->izq);
      imp_pos(r->der);
      cout<<r->dato<<" ";
   }
}

nodo *nvonodo(int x)
{
   nodo *q;
   q=new nodo;
   q->dato=x;
   q->izq=NULL;
   q->der=NULL;
   return q;
}

void ins(nodo **r,int x)
{
   if(*r==NULL)
      *r=nvonodo(x);
   else
   {
     if(x<(*r)->dato)
        ins(&((*r)->izq),x);
     else
     {
        if(x>(*r)->dato)
           ins(&((*r)->der),x);
     }
   }
}

nodo *localizar(nodo *r, int x)
{
   if(r!=NULL)
      return NULL;
   else
   {
     if(r->dato==x)
       return r;
     else
     {
        if(x<r->dato)
           return localizar(r->izq,x);
        else
           return localizar(r->der,x);
     }
   }
}

void reemplazar(nodo **n)
{
   nodo *a,*p;
   p=*n;
   a=(*n)->izq;
   while(a->der)
   {
      p=a;
      a=a->der;
   }
   (*n)->dato=a->dato;
   if(p==*n)
      p->izq=a->izq;
   else
      p->der=a->izq;
      *n=a;
}

void eliminar(nodo **r, int x)
{
   nodo *q;
   if(*r==NULL)
      {cout<<"elemento no encontrado";}
   else
   {
      if(x<(*r)->dato)
         eliminar(&(*r)->izq,x);
      else
          if(x>(*r)->dato)
             eliminar(&(*r)->der,x);
          else
          {
             q=*r;
             if(q->izq==NULL)
                *r=q->der;
             else
                if(q->der==NULL)
                   *r=q->izq;   
                else
                   reemplazar(&q);
                delete q;
          }
   }
}


void print(nodo *r)
{ 
   int o;
   do
   {
      system("CLS");
      cout<<"\t\nlos elementos del arbol son:"<<endl;
      cout<<"1.-en orden(IRD)"<<endl;
      cout<<"2.-en pre_orden(RID)"<<endl;
      cout<<"3.-en post_orden(IDR)"<<endl;
      cout<<"4.-salir"<<endl;
      cout<<"opcion"<<endl;
      cin>>o;
      getch();
      if(o==1)
      {
         system("CLS");
         imp_in(r);
         getch();
      }
      if(o==2)
      {
         system("CLS");
         imp_pre(r);
         getch();
      }
      if(o==3)
      {
         system("CLS");
         imp_pos(r);
         getch();
      }
   }while(o>0 && o<4);
}

main()
{
   nodo *r=NULL;
   int x;
   int op=1,op2=2;
   while(op!=0)
   {
      system("CLS");
      cout<<"\t\n1.-insertar";
      cout<<"\t\n2.-eliminar";
      cout<<"\t\n3.-imprimir";
      cout<<"\t\n4.-buscar";
      cout<<"\t\n0.-salir";
      cout<<"\t\nopcion"<<endl;
      cin>>op;
      if(op==1)
      {
         while(op2==2)
         {
            system("CLS");
            cout<<"insertar"<<endl;
            cout<<"introduce 1 valor"<<endl;
            cin>>x;
            ins(&r,x);
            cout<<"1.-imprimir 2.-nvo. dato 3.-menu"<<endl;
            cin>>op2;
            getch();
         }
      }
      if(op2==1)
      {
         system("CLS");
         cout<<"imprimir"<<endl;
         print(r);
         cout<<" 2.-nvo. dato 3.-menu"<<endl;
         cin>>op2;
         getch();
      }
      if(op==2)
      {
         while(op==2)
         {
            system("CLS");
            cout<<"eliminar"<<endl;
            cout<<"introduce 1 valor"<<endl;
            cin>>x;
            eliminar(&r,x);
            cout<<"1.-imprimir 2.-nvo. dato 3.-menu"<<endl;
            cin>>op2;
            getch();
         }
      }
      if(op2==2)
      {
         system("CLS");
         cout<<"eliminar"<<endl;
         print(r);
         cout<<" 2.-nvo. dato 3.-menu"<<endl;
         cin>>op2;
         getch();
      }
      if(op==3)
      {
         system("CLS");
         cout<<"impresion"<<endl;
         print(r);
         getch();
      }
      if(op==4)
      {
         int a;
         system("CLS");
         cout<<"dato a buscar"<<endl;
         cin>>a;
         localizar(r,a);
         cout<<"dato encontrado"<<endl;
         cout<<r->dato;
         getch();
      }
   }
}
