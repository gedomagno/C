#include<stdio.h> // programa que estudia el uso de punteros

main()
{
      int a=10;
      int*puntero;
      puntero=&a;
      
      printf("El valor de la variable a es:%i\n", a);
      printf("a esta guardada en: %p\n",&a);
      printf("puntero esta guardado en %p\n",&puntero);
      printf("El contenido de puntero es %X\n", puntero);
      printf("El valor de la variable apuntada por punetro es %i",*puntero);
      
      getch();
      
      
      }
