#include<stdio.h> // programa que muestra la direccion de una variable

main()
{
      int a=10;
      printf("El valor de la variable a es: %d \n", a);
      printf("La variable a esta guardada en la localidad de memoria %p", &a);
      getch();
      
      
      }
