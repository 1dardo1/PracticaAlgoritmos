#include <stdio.h>
#include <stdlib.h>
typedef tipoelemento;
typedef struct nodo* arbol;
struct nodo{
    tipoelemento raiz;
    arbol hi, hd;
};
void arbolVacio(arbol *a);
int esVacio(arbol a);
void hijoIzquierdo(arbol a, arbol* aiz);
void hijoDerecho(arbol a, arbol* ade);
void raiz(arbol a, tipoelemento* x);
void insertar(arbol* a, tipoelemento x);
void arbolVacio(arbol *a){
    *a=NULL;
}
int esVacio(arbol a){
    return (a==NULL);
}
void hijoIzquierdo(arbol a, arbol* aiz){
    if (esVacio(a)){
        printf("Arbol vacio");
    } else {
        *aiz=a->hi;
    }
}
void hijoDerecho(arbol a, arbol* ade){
    if (esVacio(a)) {
        printf("Arbol vacio");
    }else{
        *ade=a->hd;
    }
}
void raiz(arbol a, tipoelemento* x){
    if (esVacio(a)){
        printf("Arbol vacio");
    }else{
        *x=a->raiz;
    }
}
void insertar(arbol* a, tipoelemento x) {
    if (esVacio(*a)){
        *a=(struct nodo *)malloc(sizeof(struct nodo));
        if (*a==NULL) {
            printf("No se puede reservar la memoria");
        } else {
            (*a)->raiz=x;
            (*a)->hi=NULL;
            (*a)->hd=NULL;
        }
    } else {
        if ((*a)->raiz==x){
            printf("El elemento ya est? insertado\n");
        } else {
            if ((*a)->raiz<x) {
                insertar(&((*a)->hd),x);
            } else {
                insertar(&((*a)->hi),x);
            }
        }
    }
}