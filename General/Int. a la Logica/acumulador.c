/* Programa que muestra la funcion del acumulador
   Realizo Gerardo Maldonado
   21-Agosto-2014, 9:32 */
   
#include <stdio.h>   
#include<conio.h>
#include<stdlib.h>

main(){
       
       int a=5;
       int b=4;
      
       printf("\n\t %i", a+=b);
       printf("\n\t %i %i", a,b);
       
       printf("\n\t %i", a+=b);
       printf("\n\t %i %i", a,b);

       printf("\n\n\t %i", a+=b);
       printf("\n\n\t %i %i", a,b);
       
       
       getch();
       }
