#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Tarea {
int TareaID; //Numerado en ciclo iterativo
char *Descripcion; //
int Duracion; // entre 10 – 100
}Tarea;

typedef struct Nodo{
    Tarea tarea;
    struct Nodo *siguiente;

}Nodo;

int main(){




    return 0;
}