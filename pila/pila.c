#include "pila.h"

Pila* pila_crear()
{
    crear_lista(pila);
}

int pila_vacia(Pila* pila)
{
    lista_vacia(pila);
}

void pila_push(Pila* pila, int dato)
{
    lista_insertar_tail(pila);
}

int pila_pop(Pila* pila)
{
    lista_eliminar_tail(pila);
    return -1;
}

int pila_top(Pila* pila)
{
    if(lista_vacia(pila))
    return -1;
}

void pila_destruir(Pila* pila)
{
    lista_destruir(pila);
}
