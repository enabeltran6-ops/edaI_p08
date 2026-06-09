#include "lista_ligada.h"
#include <string.h>

DLista* lista_crear(){
    DLista* l = (DLista*)malloc(sizeof(DLista));
    if(l==NULL){
        l->head=l->tail=NULL;
    }
    return l;
}
bool lista_insertar_vacia(DLista *l){
    return (l->head==NULL && L->tail==NULL);
}

bool lista_insertar_vacia(DLista *l, void *info, size_t size){
    if(l==NULL) return false;
    Nodo *n=nodo_crear(info, size);
    l->head=l->tail=n;
    return true;
}

bool lista_insertar_inicio(DLista *l, void *info, size_t size){
    if(!l) return false;
     Nodo* nuevo = nodo_crear(info, size);
     nuevo->sig=l->head;
     l->head->ant=nuevo;
     l->head=nuevo;
     return true;
}

bool lista_insertar_fin(DLista *l, void *info, size_t size){
    if(!l)return false;
     Nodo* nuevo=nodo_crear(info, size);
     nuevo->ant=l->tail;
     l->tail->sig=nuevo;
     l->tail=nuevo;
     return true;

}

bool lista_insertar_x_pos(DLista *l,int pos, void *info, size_t size){
    if(!l)return false;
    Nodo* nuevo=nodo_crear(info, size);

}