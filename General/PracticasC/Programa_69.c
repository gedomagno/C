/*Programa que utiliza strcpy para copiar una cadena de texto de un lugar a otro
CUANDO SE USA EL SCANF NO SE PUEDE GUARDAR ESPACIOS EN BLANCO*/

#include<stdio.h>

int main(){
    int nombre[30];
    int var1[30];

    printf("\n Ingrese el nombre ");
    scanf("%s", &var1);         // se guarda en var1

    strcpy(nombre,var1);        //lo que hay en var1 lo paso a nombre por medio de strcpy

    printf("\n El contenido de nombre es %s ", nombre);

return 0;
}
