// Programa que calcula el numero e de acuerdo a la serie 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int main (void)
{
   int NUM=1, FACT, CONT;
   float x,expx=1.0; //declarado como real
   system("pause");
   printf("\n\t Dame el valor de X =");
   scanf("%f",&x);
   while(NUM<10)
   {
      FACT=1;
      CONT=1;
      while(CONT<=NUM)
       {
         FACT=FACT*CONT; // otra forma de escribirlo es FACT*=OONT
         CONT=CONT+1;  // otra forma de escribirlo es CONT++
       }
      expx += pow(x,NUM)/FACT; //expx=expx +pow(x,NUM)/FACT
      printf("\n\n\t termino %d ; %f",NUM, expx);
      NUM++;
   }  
   printf("\n\n");
   system("pause");
   return 0;
}
