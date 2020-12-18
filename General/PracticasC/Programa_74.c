/*Programa que muestra el uso de un apuntador a apuntador*/

#include<stdio.h>

int main(){
    int a=10;
    int *appA=&a;       //le doy la direccion de la variable a
    int**apap=&appA;         //le doy la direccion de la variable appA(la cual es un apuntador que guarda la direccion de la variable a)

    printf("\n El valor de la variable a es %d", a);
    printf("\n La variable a se encuentra almacenada en la direccion de memoria %p", &a);
    printf("\n El apuntador appA tiene guardada la direccion %p la cual coincide con la direccion de a", appA);
    printf("\n La direccion de la variable appA es %p", &appA);
    printf("\n El contenido de lo apuntado por appA es %i lo cual es igual al valor de a ", *appA);
    printf("\n La variable apap contiene la direccion de %p", apap);
    printf("\n La variable apap esta almacenada en la direccion %p",&apap);
    printf("\n\n Para cambiar el valor de a existen las siguientes dos opciones");
    printf("\n\n Por medio del apA y por medio del apap");
    printf("\n\n Primera opcion es utilizando *apA");
    *appA=100;            // aqui estoy cambiando el valor de a
    printf("\n\n Ahora a vale %i",a);
    printf("\n\n Utilizando apap ");
    **apap=5000;        //aqui estoy cambiando el valor de a
    printf("\n\n Ahora el valor de a es %i ",a);



return 0;
}
