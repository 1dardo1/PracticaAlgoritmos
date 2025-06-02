#include <stdio.h>
#include <stdlib.h>
typedef tipoelemento;
typedef struct componenteC* listaCola;
struct componenteC{
    tipoelemento elemento;
    listaCola sig;
};
typedef struct{
    listaCola principio, final;
}cola;
void colaVacia(cola *q){
    q->principio=NULL;
    q->final=NULL;
}
int esVacia(cola q){
    return (q.principio==NULL && q.final==NULL);
}
void insertarCola(cola *q, tipoelemento x){
    listaCola aux;
    aux=(struct componenteC*)malloc(sizeof(struct componenteC));
    if (aux==NULL){
        printf("No se puede reservar memoria");
    }else{
        aux->elemento=x;
        aux->sig=NULL;
        if (q->principio==NULL && q->final==NULL){
            q->principio=aux;
        }else {
            (q->final)->sig=aux;
        }
        q->final=aux;
    }
}
void primeroCola(cola q, tipoelemento* x){
    if (q.principio==NULL && q.final==NULL){
        printf("Error. Cola vacia");
    }else{
        *x=(q.principio)->elemento;
    }
}
void quitarCola(cola *q){
    listaCola aux;
    if (q->principio==NULL && q->final==NULL) {
        printf("La cola está vacia");
    }else{
        aux=q->principio;
        q->principio=(q->principio)->sig;
        free(aux);
        if (q->principio==NULL){
            q->final=NULL;
        }
    }
}