/*Apuntador a null*/

#include<stdio.h>

int main(){
    int a=10;
    int b=100;
    int*apA=&a;         //ApA apunta a la direccion de a
    int*apB=NULL;       //Anclamos el apuntador apB a NULL
    printf("\n La direcion apuntada por apA es %p", apA);       //utilizando el formato %p
    printf("\n La direccion apuntada por apA es %x", apA);      //utilizando el formato %x

    apA=NULL;  //Reasignando el apuntador a NULL

    printf("\n El apuntador apB apunta a la direccion %p", apB);
    printf("\n Y despues de la reasignacion apA apunta a la direccion %p", apA);

return 0;
}
