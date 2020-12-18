/* Programa que muestra el uso del do while "automatico" cuenta de 1 a 10*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main (){
     
     int cont=1;
     
     do{
         printf(" %d", cont);
         cont++;
         
         } while(cont<=10);
         
         getch();
     }
