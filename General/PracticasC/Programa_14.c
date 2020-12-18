/*Programa que muestra un mensaje de acuerdo a una condicion evaluada con el if*/

#include<stdio.h>

int main(){
    int edad=0;
    printf("Cuantos anos tienes?");
    scanf("%d", &edad);

    if (edad>=18){
        printf("\t Acceso permitido");}
    else{
        printf("\t Acceso denegado");
    }

return 0;
}
