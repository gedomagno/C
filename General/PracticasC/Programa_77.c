/*Reasignacion de un apuntador a dos localidades de memoria diferentes*/

#include<stdio.h>

int main(){
    int a=10;
    int b=100;
    int*apA=&a;

    printf("\nLa direccion guardada por apA es %p y el valor apuntado por apA es %i", apA, *apA);
    printf("\n Reasignando la direccion al apuntador ");
    apA=&b;     //reasignamos la direccion apuntada por apAa la direccion de la variable b
    printf("\n Ahora la direccion del apuntador apA es %p y su contenido es %i",apA, *apA);

return 0;
}
