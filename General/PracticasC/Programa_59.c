/*Programa que utiliza un arreglo de estructuras para almacenar los datos de tres personas*/

#include<stdio.h>
#define ELEMENTOS 3  //constante global

    struct estructura_amigo{
        char nombre[10];
        char apellido[10];
        int telefono;
        int edad;
    };

    struct estructura_amigo amigo[ELEMENTOS];

int main(){
    int i=0;

    for(i=0;i<ELEMENTOS;i++){       // pide los datos del arreglo
        printf("\n Ingrese el nombre del amigo %i ", i+1);
        scanf("%s" , &amigo[i].nombre);
        printf("\n Ingrese el apellido del amigo %i ", i+1);
        scanf("%s", &amigo[i].apellido);
        printf("\n Ingrese el telefono del amigo %i ", i+1);
        scanf("%i", &amigo[i].telefono);
        printf("\n Ingrese la edad del amigo %i ",i+1);
        scanf("%i", &amigo[i].edad);
    }

    for(i=0;i<ELEMENTOS;i++){
        printf("\n Nombre[%i]: %s" ,i+1, amigo[i].nombre);
        printf("\n Apellido[%i]: %s" , i+1, amigo[i].apellido);
        printf("\n Telefono[%i]: %i ", i+1, amigo[i].telefono);
        printf("\n Edad[%i]: %i", i+1, amigo[i].edad);
    }

return 0;
}
