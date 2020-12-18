/* Programa que muestra el uso del do while manual */


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){

   float num1=0;
   float num2=0;
   float res=0;
   char respuesta=' '; // forma de asignar un vacio a un tipo de dato caracter

   do{
       
   printf("\n\n\t Dame un numero: ");
   scanf("%f", &num1);    

   printf("\n\n\t Dame otro numero: ");
   scanf("%f", &num2);    
   
   res=num1 +num2;
   
   printf("La suma de %.3f + %.3f = %.4f", num1, num2,res);
   
   printf("\n\n\t Desea hcer otra operacion? Presione <s/n>: ");
   scanf("%s", &respuesta);
      
   }while(respuesta=='s' || respuesta =='S');
   
   getch();
       
       }

