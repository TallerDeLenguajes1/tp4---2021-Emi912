#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Tarea {
int TareaID; //Numerado en ciclo iterativo
char *Descripcion; //
int Duracion; // entre 10 – 100
}Tarea;


void CargarTareas(Tarea **tarea, int cant);
void ListarTareas(Tarea **tarea, int cant);
void MostrarTarea(Tarea **tarea, int i);
int main(){

    Tarea **Tpendientes;
    Tarea **Trealizadas;
    int cantidad;
    Tpendientes = (Tarea**)malloc(sizeof(Tarea*));
    Trealizadas = (Tarea**)malloc(sizeof(Tarea*) * cantidad);
    printf("Ingrese la cantidad de Tareas\n");
    scanf("%d", &cantidad);
    CargarTareas(Tpendientes, cantidad);
    ListarTareas(Tpendientes, cantidad);


    return 0;
}

void CargarTareas(Tarea **tarea, int cant){

    for (int i = 0; i < cant; i++)
    {
        tarea[i] = (Tarea*)malloc(sizeof(Tarea*) * cant);
        tarea[i]->Duracion = rand() % 90 + 10;
        tarea[i]->TareaID = i + 1;
        printf("Descripcion:\n");
        tarea[i]->Descripcion = (char*)malloc(sizeof(char)* 40);
        fflush(stdin);
        gets(tarea[i]->Descripcion);
    }

}

void ListarTareas(Tarea **tarea, int cant){
    for (int i = 0; i < cant; i++)
    {
        MostrarTarea(tarea, i);
    }
    
}

void MostrarTarea(Tarea **tarea, int i){
    printf("Descripcion: %s\n", tarea[i]->Descripcion);
    printf("Duracion: %d\n", tarea[i]->Duracion);
    printf("ID: %d\n", i+1);
}