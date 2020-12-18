#include<stdio.h>
main(){
       int *a,*b;
       a=(int*)malloc(sizeof(int)); //para asegurar que la funcion malloc me regrese un puntero de tipo entero 
       b=(int*)malloc(sizeof(int)); // con malloc le digo al apuntador donde iniciar
       int c;
       
       printf("Dame el valor de a: ");
       scanf("%i",a); // aqui no lleva el amperson
       printf("Dame el valor de b: ");
       scanf("%i",b); //aqui no lleva el amperson
       c=(*a)+(*b);
       printf("La suma de a y b es: %i",c);
       getch();
       
       }
