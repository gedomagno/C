/*Programa que muestra que un apuntador apunta al primer elemento de un arreglo cuando se le direcciona, ademas se recorre un arreglo por medio de apuntadores */
#include<stdio.h>

int main(){
    int i=0;
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    int*apA=&a;

    printf("\n La direccion de a es %p", &a);
    printf("\n El apuntador apA apunta al valor %i el cual es el primer elemento del arreglo a", *apA);
    printf("\n EL segundo elemento del arreglo a es %i", *(apA+1));

    for(i=0; i<10;i++){             //recorremos el arreglo por medio de apuntadores
        printf("\n El elemento %i del arreglo a es %d", i, *(apA+i));
    }

return 0;
}
