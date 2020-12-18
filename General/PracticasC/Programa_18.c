/*Programa que determina la raiz cuadrada de un numero ingresado*/
#include<stdio.h>

int main(){
    float num=0;
    float res=0;

    printf("Introduzca un numero positivo");
    scanf("%f",&num);
    res=sqrt(num);
    printf("La raiz cuadrada de %f es : %.3f",num, res);

return 0;

}
