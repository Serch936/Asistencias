#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo {

    char nombre[50];
    int *asistencias;     
    int numDias;          
    struct nodo* siguiente;
    
} Nodo;

Nodo* crearnodo(char nombre[]) {

    Nodo* nuevo = (Nodo*) malloc(sizeof(Nodo));

    if (nuevo == NULL) {

        printf("Error: no se pudo asignar memoria\n");
        return;

    }

    strcpy(nuevo->nombre, nombre);
    nuevo->asistencias = NULL;
    nuevo->numDias = 0;
    nuevo->siguiente = NULL;

    return nuevo;

}


