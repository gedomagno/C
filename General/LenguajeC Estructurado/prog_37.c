#include<stdio.h>// Cambio de valor de variables por medio de punteros(*puntero)
main()
{
      int a=10;
      int*puntero;
      puntero=&a;
      
      printf("El valor inicial de a es:%i\n",a);
      printf("y despues lo cambiamos a 20 por medio de apuntadores\n");
      
      *puntero=20;
      
      printf("El nuevo valor de a es:%i", a);
      
      getch();
      
      }
