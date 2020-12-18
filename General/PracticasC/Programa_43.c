/*Programa que utiliza la libreria areaperimetro.h en la cual definí dos funciones que calculan
el area y el perimetro de un cuadrado */

#include "areaperimetro.h"  // nombre de la libreria

int main(){
    int var1=0;
    int var2=0;
    int lado=0;
    printf("Introduzca la medida del lado del cuadrado ");
    scanf("%i", &lado);

    var1=perimetro(lado); //Llamo a la funcion perimetro definida en la libreria areaperimetro.h
    var2=area(lado); //llamo a la funcion area definida en la libreria areaperimetro.h

    printf("\n El perimetro del cuadrado es %d", var1);
    printf("\n El area del cuadrado es %d", var2);

return 0;
}
