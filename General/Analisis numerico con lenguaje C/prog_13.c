// Programa que calcula el factorial de un numero
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void)
{
   int NUM, FACT, CONT;
   FACT=1;
   CONT=1;
  
   printf("\n\n\t Introduzca un numero ");
   scanf("%d",&NUM);
 
 while(CONT<=NUM)
   {
     FACT=FACT*CONT; // otra forma de escribirlo es FACT*=OONT
     CONT=CONT+1;  // otra forma de escribirlo es CONT++
   }
   printf("\n\n\t %d!=%d",NUM, FACT);
   printf("\n\n");
   system("pause");
   return 0;
}
