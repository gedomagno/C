/* Programa que determina si un numero ingresado es positivo o negativo o cero
   Realizado por Gerardo Maldonado
   14-Agosto-2014, 9:08 */
   
# include <stdio.h>   
# include <conio.h>
# include <stdlib.h>

main (){ 
       int num=0;
       int res=0;
       
       printf("\n Ingrese un numero ");
       scanf("%i", & num);
       printf("\n\n El numero ingresado es %i", num);
       
       if (num >0){ 
       printf("\n\n El numero ingresado es positivo");}
       
       if (num <0){ 
       printf("\n\n El numero ingresado es negativo");}

       if (num ==0){ 
       printf("\n\n El numero ingresado es neutro");}
      
       getch();
       }
