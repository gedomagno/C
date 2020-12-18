/*Muestra el funcionamiento de las funciones puts y gets como una alternativa a printf y scanf*/

#include<stdio.h>

int main(){
    char nombre[10];

    printf("Introduzca su nombre ");
    gets(nombre);

    puts(nombre);

return 0;
}
