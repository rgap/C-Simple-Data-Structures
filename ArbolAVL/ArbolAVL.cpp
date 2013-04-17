#include <iostream.h>

typedef struct nodo_AVL AVL;
struct nodo_AVL {
      int info;
      int fb; //factor de balanceo
      AVL *pai; //padre del nodo
      AVL *esq; //hijo izq
      AVL *dir; // hijo der
};

AVL*Inicia_Arbol(){
  AVL*temp;
  if ((temp = (AVL *) malloc(sizeof(AVL))) != NULL) 
  { 
    temp->pai=NULL; 
    temp->esq=NULL;
    temp->dir=NULL;
    return(temp); 
  } 
  else 
    exit(0); 
}

void en_orden(AVL *no){
      if (no != NULL){
            en_orden(no->esq);
            printf("%d  ",no->info);
            en_orden(no->dir);
      }
}

AVL *rotacaoRR(AVL *no) {
    AVL *p;
    p = no->dir;
    no->dir = p->esq;
    if (p->esq != NULL)
        p->esq->pai = no;
    p->esq = no;
    p->pai = no->pai;
    no->pai = p;
    no->fb = 0;

    return(p);
}
AVL *rotacaoLL(AVL *no) {
    AVL *p;
    p = no->esq;
    no->esq = p->dir;
    if (p->dir != NULL)
        p->dir->pai = no;
    p->dir = no;
    p->pai = no->pai;
    no->pai = p;
    no->fb = 0;
    
    return(p);
}
AVL *rotacaoLR(AVL *no) {
    AVL *pai;     //ponteiro para depois atualizar o pai após a rotação
    AVL *no_esq;  //ponteiro para o filho esquerdo para atualizar o FB após a rotação
    AVL *novo_no; //ponteiro à ser retornado
    int FB_fdir;  //fator de balanceamento do no à direita do filho esquerdo
    pai = no->pai;
    no_esq = no->esq;
    FB_fdir = no_esq->dir->fb;
    no->esq = rotacaoRR(no_esq);
    novo_no = rotacaoLL(no);
    novo_no->pai = pai;
    no->fb = (FB_fdir == 1)?-1:0; //Atualiza FB do nó rotacionado
    no_esq->fb = (FB_fdir == -1)?1:0; // Atualiza FB do nó à esquerda do nó rotacionado

    return(novo_no);
}
AVL *rotacaoRL(AVL *no) { 
    AVL *pai;     //ponteiro para depois atualizar o pai após a rotação
    AVL *no_dir;  //ponteiro para o filho direito para atualizar o FB após a rotação
    AVL *novo_no; //ponteiro à ser retornado
    int FB_fesq;  //fator de balanceamento do no à esquerda do filho direito
    pai = no->pai;
    no_dir = no->dir;
    FB_fesq = no_dir->esq->fb;
    no->dir = rotacaoLL(no_dir);
    novo_no = rotacaoRR(no);
    novo_no->pai = pai;
    no->fb = (FB_fesq == -1)?1:0;      //Atualiza FB do nó rotacionado
    no_dir->fb = (FB_fesq == 1)?-1:0;  // Atualiza FB do nó à direita do nó rotacionado
    return(novo_no);
}

/*
*  El nuevo nodo fue insertado a la izquierda. Ocorrió desbalanceo (fb == -2)
*/
AVL *bal_esq(AVL *no) {
    AVL *p;
    p = no->esq;
    if (p->fb == 1)             //señales iguales y positivo
        no = rotacaoLL(no);
    else
        no = rotacaoLR(no);    //señales diferentes
    no->fb = 0;

    return(no);
}
/*
*  O nuevo nodo fue insertado a la derecha. Ocorrió desbalanceo (fb == 2)
*/
AVL *bal_dir(AVL *no) {
    AVL *p;
    p = no->dir;
    if (p->fb == -1)                //Señales iguales y negativo
        no = rotacaoRR(no);
    else
            no = rotacaoRL(no);     //Señales diferentes
    no->fb = 0;

    return(no);
}
AVL *aloca_novo_no(int info, bool h) {
    AVL *novo_no;
    //Inserta el nuevo nodo
    if (novo_no = (AVL *) malloc( sizeof(AVL) )) {

        novo_no->info = info;
        novo_no->esq = NULL;
        novo_no->dir = NULL;
        novo_no->pai = NULL;
        novo_no->fb = 0;
        h = true; //Nodo insertado. Debe propagar la actualización de FB

        return(novo_no);
    }
    else {

        printf("Não foi possível alocar memória.");
        h = false; //No irá a propagar la atualización

        return(NULL);
    }
}
/*
*  Función para insertar en el AVL
*/
AVL *insere(AVL *raiz, int info, bool h) {
    AVL *novo_no;
    if (raiz == NULL)
        return(aloca_novo_no(info,h));
    else {
        if (info == raiz->info)
            printf("Informação já contida na árvore.");
        else
            if (info < raiz->info) {
                raiz->esq = insere(raiz->esq, info, h);
                //Atualiza PADRE del nodo insertado
                if (!raiz->esq->pai)
                    raiz->esq->pai = raiz;
                if (h)
                    switch(raiz->fb) {
                        //Estaba más alto a la derecha e insertó más un nodo a la izquierda
                        case -1:
                            raiz->fb = 0;
                            h = false; //No propaga los ajustes en los factores de balanceo
                             break;
                        case 0:
                            raiz->fb = 1; //el lado izquierdo queda mayor y los factores de balanceo arriba deberán ser ajustados
                             break;
                        case 1:
                            raiz = bal_esq(raiz); //FB == 2 -> retorna el sub-arbol balanceado
                            h = false; //no propaga la atualización de los factores de balanceo
                             break;
                    }
            }
            else {
                raiz->dir = insere(raiz->dir, info, h);
                //Atualiza PAI do nó inserido
                if (!raiz->dir->pai)
                    raiz->dir->pai = raiz;
                if (h)
                    switch (raiz->fb) {
                        //estaba más alto a la izquierda e insertó más un nodo a la derecha
                        case 1:
                            raiz->fb = 0; 
                            h = false; //no propaga los ajustes en los factores de balanceo
                            break;
                        case 0:
                            raiz->fb = -1; // el lado derecho queda mayor que el izquierdo y el ajuste deber ser propagado
                            break;
                        case -1:
                            //FB == -2 -> retorna el sub-árbol balanceado
                            raiz = bal_dir(raiz);
                            h = false; //no propaga la actualización de los factores de balanceo
                            break;
                    }
            }
            return(raiz);
    }
}

/*
*  Atualización de FB y balanceo para la raíz izquierda
*/
AVL *balanceamento_esquerdo(AVL *no, bool h) {
    AVL *f_dir;
    int fb_dir;
    switch (no->fb) {
        case 1:
            no->fb = 0;
            break;
        case 0:
            no->fb = -1;
            h = false;
            break;
        case -1:
                f_dir = no->dir;
                fb_dir = f_dir->fb;
                if (fb_dir <= 0) {
                    f_dir = rotacaoRR(no);
                 if (fb_dir == 0) {
                    no->fb = -1;
                       f_dir->fb = 1;
                       h = false;
                    }
                    else {
                        no->fb = 0;
                        f_dir->fb = 0;
                    }
                    no = f_dir;
                }
                else {
                    no = rotacaoRL(no);
                    no->fb = 0;
                }
    }
    return(no);
}

/*
*  Atualización del FB y balanceo para la raíz derecha
*/
AVL *balanceamento_direito(AVL *no, bool h) {
    AVL *f_esq;
    int fb_esq;
    switch (no->fb) {
        case -1:
            no->fb = 0;
            break;
        case 0:
            no->fb = 1;
            h = false;
            break;
        case 1:
            f_esq = no->esq;
            fb_esq = f_esq->fb;
            if (fb_esq >= 0) {
                f_esq = rotacaoLL(no);
                if (fb_esq == 0) {
                    no->fb = 1;
                    f_esq->fb = -1;
                    h = false;
                }
                else {
                    no->fb = 0;
                    f_esq->fb = 0;
                }
                no = f_esq;
            }
            else {
                no = rotacaoLR(no);
                no->fb = 0;
            }
    }
    return(no);
}
/*
*  Busca nodo sustituto y es realizada la eliminación (busca el más a la derecha del nodo izquierdo)
*/
AVL *busca_remove(AVL *no, AVL *no_chave, bool h) {
    AVL *no_removido;
    if (no->dir != NULL) {
        no->dir = busca_remove(no->dir, no_chave, h);
        if (h)
            no = balanceamento_direito(no, h);
    }
    else {
        no_chave->info = no->info;
        no_removido = no;
        no = no->esq;
        if (no != NULL)
            no->pai = no_removido->pai;
        h = true;     //Debe propagar la actualización de los FB
        free(no_removido);
    }
    return(no);
}
/*
*  Remoción del Árbol AVL
*/
AVL *remove(AVL *raiz, int info, bool h) {
    if (raiz == NULL) {
        printf("Chave não localizada !");
        h = false;
    }
    else {
        if (raiz->info > info) {
            raiz->esq = remove(raiz->esq, info, h);
            if (h)
                raiz = balanceamento_esquerdo(raiz, h);
        }
        else
            if (raiz->info < info) {
                raiz->dir = remove(raiz->dir, info, h);
                if (h)
                    raiz = balanceamento_direito(raiz,h);
            }
            else { //Encontrou o elemento a ser removido
                if (raiz->dir == NULL) {
                    if (raiz->esq != NULL) //Escoge el nodo a la izquierda como sustituto
                        raiz->esq->pai = raiz->pai;
                    raiz = raiz->esq;
                    h = true;
                }
                else
                    if (raiz->esq == NULL) {
                        if (raiz->dir != NULL) //Escoge el nodo a la derecha como sustituto
                            raiz->dir->pai = raiz->pai;
                        raiz = raiz->dir;
                        h = true;
                    }
                    else { // Busca el elemento más a la derecha del nodo izquierdo
                        raiz->esq = busca_remove(raiz->esq, raiz, h);
                        //Si es necesario efectua balanceo (Izquierdo pues la función  
                        //busca_remove fue para el nodo izquierdo)
                        if (h) 
                            raiz = balanceamento_esquerdo(raiz, h);
                    }
            }
    }
    return(raiz);
}

main() 
{ 
  int aux_l;  
  AVL *root; 
  int x=0; 
  char opc; 
  
  root= (AVL *) Inicia_Arbol(); 
  
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

