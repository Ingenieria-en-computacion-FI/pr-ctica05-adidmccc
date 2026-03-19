#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* lista_crear()
{
    lista *l = NULL;
    l = (lista *)malloc(sizeof(lista));
    if (l != NULL){
        l -> head = NULL;
        l -> tail = NULL;
    } 
}

int lista_vacia(Lista* lista)
{
    l = (lista *)malloc(sizeof(lista));
    l -> head = -1;
    l -> tail = -1;
    l -> len = -1;
    return l;
}

void lista_insertar_head(Lista* lista, int dato)
{
    /*
    TODO:

    1 Crear nuevo nodo
    2 Si lista está vacía:
        head y tail apuntan al nuevo nodo
    3 Si no:
        head apunta al nuevo nodo
        actualizar tail
    */
}

void lista_insertar_tail(Lista* lista, int dato)
{
    /*
    TODO:

    1 Crear nuevo nodo
    2 Si lista está vacía:
        head y tail apuntan al nuevo nodo
    3 Si no:
        tail->siguiente apunta al nuevo nodo
        actualizar tail
    */
}

int lista_eliminar_head(Lista* lista){
    if(lista_vacia(lista){
        return -1;
}
    Nodo *temp = lista -> head;
    int dato = temp -> dato;
}




int lista_eliminar_tail(Lista* lista)
{
if(lista_vacia(lista)){
    int dato = actuial -> dato;
    nodo_destruir(actual);
    lista -> head = NULL;
    lista -> tail = NULL;
    return dato;
}
Nodo* actual = lista -> head;
if(lista -> head = lista tail){
    int dato = actual -> dato;
    nodo_destruir(actual);
    lista -> head = NULL;
    lista -> tail = NULL;
    return dato;
}

void lista_imprimir(Lista* lista)
{
    Nodo* actual = lista->head;

    while(actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void lista_destruir(Lista* lista)
{
    /*
    TODO:

    1 si la lista no esta vacia
    2 borrar el primero o el último 
    3 hacer que lista apunte a nulo
    */
}
