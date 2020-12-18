/*Programa que muestra la direccion de una variable por medio de %p*/

#include<stdio.h>

int main(){
    int a=10;

    printf("La direccion donde se guarda la variable a es %p", &a);

return 0;
}
