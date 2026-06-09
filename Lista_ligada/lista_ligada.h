#ifndef _LISTA_LIGADA_H_
#define _LISTA_LIGADA_H_

#include "nodo.h"

typedef struct DLista DLista;

struct Dlista{
    Nodo* head;
    Nodo* tall;
};


DLista* lista_craer();
bool lista_es_vacia(DLista *l);

bool lista_insertar_vacia(Dlista *l, void *info, size_t size);
bool lista_insertar_inicio(Dlista *l, void *info, size_t size);
bool lista_insertar_fin(Dlista *l, void *info, size_t size);
bool lista_insertar_pos(Dlista *l, void *info, size_t size);

int lista_num_nodos(DLista *l){
    int i=0;
    for(Nodo *tmp = l->head; tmp !=NULL;tmp = tmp->sig; i++);
    return 1;
}
#endif