/* Programa que va de x a 1 con dowhile 
   Realizo Gerardo Maldonado
   22-Agosto-2014, 3:45*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){
       
     int num=1;
     int inicio=0;
     
     printf("\n Dame un inicio ");
     scanf("%i", &inicio);
     
     do{ 
         printf("%i ", inicio);
         inicio--;      
                 }while(inicio>=num);
                 
                 getch();
     
       
       
       }
