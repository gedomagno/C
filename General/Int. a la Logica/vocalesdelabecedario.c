/* Programa que representa las vocales del abecedario
   Realizado por Gerardo Maldonado
   19-Agosto-2014, 2:05 */
   
#include<stdio.h>   
#include<conio.h>
#include<stdlib.h>

main () {
     
     char letra=97;

     while (letra<=122) {if(letra==97 || letra==101 || letra==105 || letra==111 || letra==117 )
     {printf(" %c", letra);}
     letra++;}
            
     getch();
     }
