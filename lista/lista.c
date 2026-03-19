#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lista.h"

Lista* lista_crear()
{
    lista *l = NULL;
    l = (lista *)malloc(sizeof(lista));
        l -> head = NULL;
        l -> tail = NULL;
}

bool lista_vacia(Lista* lista)
{
return lista -> head == NULL;
}

void lista_insertar_head(Lista* lista, int dato)
{
Nodo *newNode = CrearNodo(e);
    if(lista_vacia(lista)){
        l -> head = newNode;
        l -> tail = newNode;
    } else if {
        newNode -> siguiente = lista -> head;
        l -> head; 
    }
}

void lista_insertar_tail(Lista* lista, int dato)
{
    Nodo *newNode = CrearNodo(e);
    if(lista_vacia(lista)){
        l -> head = newNode;
        l -> tail = newNode;
    } else if {
       lista -> tail -> siguiente = newNode;
        lista -> taio _ newNode;
    }
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
nodo_destruir(temp);
return dato;

Nodo* actual = lista -> head;
if(lista -> head = lista tail){
    int dato = actual -> dato;
    nodo_destruir(actual);
    lista -> head = NULL;
    lista -> tail = NULL;
    return dato;
}
while (actual -> siguiente != lista -> tail){
    actual -> actual -> siguiente;
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
   while ( != lista_vacia(lista)){
       lista_eliminar_head(lista);
   } free (lista);
}
