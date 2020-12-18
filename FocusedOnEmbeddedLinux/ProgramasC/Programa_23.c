/*Programa que usa sizeof y strleng
strlen devuelve la LONGITUD! (el numero de caracteres de una cadendasin incluir el fin de cadena)
sizeof devuelve el numero de bytes (incluyendo el fin de cadena)*/


#include<stdio.h>
#include<string.h>

int main(){
    char nombre[10];
    printf("Ingrese un mensaje: ");	
    scanf("%s", nombre);
    printf("Tu palabra fue: %s\n", nombre);
    printf("El tamaño con strleng es %d\n", strlen(nombre));
    printf("El tamaño con size es %d\n", sizeof(nombre));

return 0;
}
