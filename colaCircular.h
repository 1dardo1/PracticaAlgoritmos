#include <stdio.h>
#include <stdlib.h>
typedef tipoelemento;
typedef struct componenteC* cola;
struct componenteC {
    tipoelemento elemento;
    cola sig;
};
void colaVacia(cola *q){
    *q=NULL;
}
int esVacia(cola q){
    return (q==NULL);
}
void insertarCola(cola *q, tipoelemento x){
    cola aux;
    aux=(struct componenteC*)malloc(sizeof(struct componenteC));
    if (aux==NULL){
        printf("No se puede reservar memoria");
    }else{
        aux->elemento=x;
        if (*q==NULL) {
            aux->sig=aux;
        }else{
            aux->sig=(*q)->sig;
            (*q)->sig=aux;
        }
        *q=aux;
    }
}
void primeroCola(cola q, tipoelemento* x){
    if (q==NULL){
        printf("Error. Cola vacia");
    }else{
        *x=q->sig->elemento;
    }
}
void quitarCola(cola *q){
    cola aux;
    if (*q==NULL){
        printf("Error. Cola vacia");
    }else{
        aux=(*q)->sig;
        if (*q==aux){
            *q=NULL;
        }else{
            (*q)->sig=aux->sig;
        }
        free(aux);
    }
}