#include <stdio.h>
#include <stdlib.h>
typedef tipoelementopila;
typedef struct componentep* pila;
struct componentep{
    tipoelementopila elemento;
    pila sig;
};
void pilaVacia(pila *p){
    *p=NULL;
}
int esVaciaPila(pila p){
    return (p==NULL);
}
void insertarPila(pila *p, tipoelementopila x){
    pila aux;
    aux=(struct componentep*)malloc(sizeof(struct componentep));
    if (aux == NULL){
        printf("Error. Memoria agotada");
    }else{
        aux->sig=*p;
        aux->elemento=x;
        *p=aux;
    }
}
void cima(pila p, tipoelementopila* x){
    if (p==NULL){
        printf("Error. Pila Vacia");
    } else{
        *x=p->elemento;
    }
}
void borrar(pila *p){
    pila aux;
    if ((*p)==NULL)
    {
        printf("Error. Pila vacia");
    } else
    {
        aux=*p;
        *p=(*p)->sig;
        free(aux);
    }
}