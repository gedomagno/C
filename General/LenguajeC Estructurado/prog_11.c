#include<stdio.h> // apuntadores

main(){
       int a=8;
       int*puntero=&a;  // guardar la direccion de memoria de a
       printf("Este es el valor de a: %i",a);
       printf("\n Y esta su direccion de memoria: %x ", &a);
       printf("\n\n Este es el valor de puntero: %x", puntero);
       printf("\n Esta es su direccion de memoria: %x", &puntero);
       printf("\n Y este es el valor al que apunta : %i", *puntero);
       
       getch();
       
       }
