#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef tipoelementolista;
typedef struct componente* lista;
struct componente {
    tipoelementolista elemento;
    lista enlace;
};
void inicializarLista(lista* l){
    *l=NULL;
}
void insertarLista(lista *l, tipoelementolista x){
    lista aux;
    aux=(struct componente *)malloc(sizeof(struct componente));
    if (aux==NULL) {
        printf("No hay memoria. \n");
    }
    else
    {
        aux->elemento=x;
        aux->enlace=*l;
        *l=aux;
    }
}
int esVaciaLista(lista l){
    return (l==NULL);
}
void primeroLista(lista l, tipoelementolista* x){
    if (l==NULL){
        printf("La lista está vacia");
    }
    else{
        *x=l->elemento;
    }
}
void restoLista(lista *l){
    if (*l==NULL){
        printf("Lista vacia");
    }
    else{
        *l=(*l)->enlace;
    }
}