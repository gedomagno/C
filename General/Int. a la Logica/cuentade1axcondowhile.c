/* Programa que va de 1 a x 
    Realizo Gerardo Maldonado
    22-Agosto-2014, 3:41 */
   
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main () {
     
     int inicio=1;
     int lim=0;
     
     printf("\n Dame un limite ");
     scanf("%i", &lim);
     
     do{ 
         printf("%i ", inicio);
         inicio++;      
                 }while(inicio<=lim);
                 
                 getch();
     
     }
