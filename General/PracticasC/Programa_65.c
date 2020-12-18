/*Programa que muestra y modifica el valor apuntado por un apuntador*/

#include<stdio.h>

int main(){
    int num=10;
    int*appNum;
    appNum=&num;

    printf("\n El valor de num es %i", num);
    printf("\n El valor de appNum es %p", appNum);
    printf("\n Ahora cambiare el valor de la variable apuntada (num) por appNum mediante el * ");

    *appNum=100;            //modifico el valor apuntado por appNum mediante *

    printf("\n El nuevo valor de num es: %i", *appNum);  //ingreso y modifico el valor apuntado por appNum mediante *
    printf("\n num vale ahora %i ",num );

return 0;
}
