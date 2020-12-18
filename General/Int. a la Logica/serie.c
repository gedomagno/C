/* Programa que muestra una serie de numeros
   Realizo Gerardo Maldonado
   21-Agosto-2014, 9:04 */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main (){
     
     int n=0;

//     int tope=0;
         
     printf("\ Deme un numero ");
     scanf("%i", &n);
    // scanf("%i", &tope);
     
     do{
           printf("(%i,%i)", n-=1, n+=2);            
              } while (n<=15);
               
          
     getch();
     
     
     
     
     
     
     }
