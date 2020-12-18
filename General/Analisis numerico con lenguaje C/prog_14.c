// Programa que muestra el factorial de los 12 primeros numeros N.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void)
{
   int NUM = 1, FACT, CONT;

   while(NUM<20)
   {
      FACT=1;
      CONT=1;
 
      while(CONT<=NUM)
        {
          FACT=FACT*CONT; // otra forma de escribirlo es FACT*=CONT
          CONT=CONT+1;  // otra forma de escribirlo es CONT++
        }
      printf("\n\n\t %d!=%d",NUM, FACT);
      NUM++;
   }

   printf("\n\n");
   system("pause");
   return 0;
}
