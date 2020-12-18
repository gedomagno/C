/*Programa que llena un arreglo y luego le muestra al usuario el elemento deseado */

#include<stdio.h>

int main(){
    char miArreglo[5];
    int elemento=0;

    printf("\n Ingrese una letra ");
    scanf("%s", &miArreglo[0]);
    printf("\n Ingrese una letra ");
    scanf("%s", &miArreglo[1]);
    printf("\n Ingrese una letra ");
    scanf("%s", &miArreglo[2]);
    printf("\n Ingrese una letra ");
    scanf("%s", &miArreglo[3]);
    printf("\n Ingrese una letra ");
    scanf("%s", &miArreglo[4]);

    printf("\n Los elementos ingresados fueron %s", miArreglo);

    printf("\n Ingrese el numero del elemento que desea visualizar " );
    scanf("%i", &elemento);

    printf("\n La letra del elemento %i es %c", elemento, miArreglo[elemento-1]);



return 0;
}
