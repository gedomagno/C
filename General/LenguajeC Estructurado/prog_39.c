#include<stdio.h> // comparacion de variables mediante punteros
main()
{
      int a=10;
      int*puntero1;
      int*puntero2;
      puntero1=&a;
      puntero2=&a;
      
      if(puntero1==puntero2) // comparacion entre similitid de localidades de memoria
         printf("puntero1 y puntero 2 apuntan al mismo sitio");
      else
         printf("puntero 1 y puntero 2 apuntan a diferentes sitios");   
      
      getch();            
      
      }
