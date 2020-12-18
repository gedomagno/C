// Programa que calcula el seno de un numero en radianes
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.141592 //sirve para definir constantes simbolicas

int main (void)
{
   int C=1, FACT, CONT, n;
   float x, y, senox=0.0; //declarado como real
   system("cls");
   printf("\n\t Dame el valor de X =");
   scanf("%f",&x);
   n=x/PI;
   y= x-n*PI;
   
   while(C<10)
   {
      FACT=1;
      CONT=1;
      while(CONT<=2*C-1)
       {
         FACT=FACT*CONT; // otra forma de escribirlo es FACT*=OONT
         CONT=CONT+1;  // otra forma de escribirlo es CONT++
       }
      senox = senox + pow(-1,C-1)*pow(y,2*C-1)/FACT; //expx=expx +pow(x,NUM)/FACT
      printf("\n\n\t termino %d ; %f",C, senox);
      C++;
   }  
   senox =pow(-1,n)*senox;
   printf("\n\n\t seno(%f)= %f",x,senox);
   printf("\n\n");
   system("pause");
   return 0;
}
