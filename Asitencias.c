#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

typedef struct AsistenciaAlumno {
    int id;
    char nombre[100];
    char estado; 
    struct AsistenciaAlumno *siguiente;
} AsistenciaAlumno;

typedef struct DiaClase {
    char fecha[20];
    struct DiaClase *siguienteDia;
    AsistenciaAlumno *listaDeAsistencia; 
} DiaClase;


