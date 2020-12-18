/* Programa que genera una cuenta descendente desde un limite dado por el usuario hasta 1
   Realizo Gerardo Maldonado
   17-Agosto-2014, 6:11 */
   
# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
# include <math.h>

main () {
     
     int cuenta=0;
     int fin=1;
     
     printf(" \n Introduzca un numero ");
     scanf("%i", &cuenta);
     
     while (cuenta>=fin){
     printf(" %i", cuenta); 
     cuenta --;     
           }
     getch();
     }
