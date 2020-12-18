#include<stdio.h> // comparacion de dos numeros por medio de apuntadores
main()
{
      int a=10,b=1;
      int*puntero1;
      int*puntero2;
      puntero1=&a;
      puntero2=&b;
      
      if(*puntero1==*puntero2)// comparacion entre similitud de contenidos
         printf("Las variables son iguales");
      else
         printf("No son iguales");   
        
        getch();

      }
