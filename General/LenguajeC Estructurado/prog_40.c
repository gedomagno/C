#include<stdio.h>// programa que suma dos numeros por medio de funciones
int suma(int a, int b);

main()
{
      int var1, var2,resultado;
      var1=5;
      var2=8;
      resultado=suma(var1,var2);
      printf("El resultado de la suma es:%d", resultado);
      getch();
      }
      
int suma(int a, int b)
{
         int c;
         c=a+b;
         return(c);
         }      
