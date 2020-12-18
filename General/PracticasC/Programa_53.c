/*Programa que pide una cadena de caracteres y la imprime*/

#include<stdio.h>

int main(){
    char nombre[30];
    printf("Ingrese su nombre ");
    scanf(" %s",&nombre);

    printf("Bienvenido %s", nombre);

return 0;
}
