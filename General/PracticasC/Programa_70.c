/*Programa que utiliza la funcion gets para almacenar una cadena de caracteres en una variable.
Por medio de gets si podemos guardar espacios en blanco*/

#include<stdio.h>

int main(){
    char nombre[30];

    printf("Introduzca su nombre ");
    gets(nombre);   //ingreso el nombre por medio de la funcion gets, con todo y espacios en blanco

    printf("Su nombre es %s ", nombre);

return 0;
}
