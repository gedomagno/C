/* Programa que imprime todo el codigo ascii
   Realizo Gerardo Maldonado
   19-Agosto-2014, 9:00*/
   
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main () {
         char letra=128;
         
         while(letra<=159){printf("%c ", letra);
                           letra++;
                           }
         
         getch ();
     }
