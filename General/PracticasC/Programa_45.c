/*Programa que utiliza funciones para el calculo del perimetro y area de un cuadrado*/

#include<stdio.h>
int per_cuadrado(int lado);
int a_cuadrado(int lado);

int main(){
    int lado=0;
    int resultado=0;

    printf("\n Introduzca la longitud del lado del cuadrado ");
    scanf("%d", &lado);
    resultado=per_cuadrado(lado);
    printf("\n El perimetro del cuadrado es %d", resultado);
    resultado=a_cuadrado(lado);
    printf("\n El area del cuadrado es %d", resultado);

return 0;
}

int per_cuadrado(int lado){
return (4*lado);
}

int a_cuadrado(int lado){
return (lado*lado);
}
