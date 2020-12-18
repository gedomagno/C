/*Programa que utiliza una estructura para almacenar los datos de una persona(nombre,tel,edad)*/

#include<stdio.h>

struct estructura_amigo{
    char nombre[30];
    char apellido[30];
    int telefono;
    int edad;
};

struct estructura_amigo amigo;

int main(){
        printf("Escribe el nombre del amigo ");
        scanf("%s", &amigo.nombre);
        printf("Escribe el apellido del amigo ");
        scanf("%s", &amigo.apellido);
        printf("Escribe el telefono del amigo ");
        scanf("%i", &amigo.telefono);
        printf("Escribe la edad del amigo ");
        scanf("%i", &amigo.edad);

        printf("\n El amigo %s %s tiene el numero %i y la edad %i ",amigo.nombre, amigo.apellido, amigo.telefono, amigo.edad);

return 0;
}
