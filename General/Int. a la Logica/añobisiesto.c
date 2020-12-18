/* Programa que determina si un año ingresado es bisiesto
   Realizado por Gerardo Maldonado
   14-Agosto-2014, 12:52 */
   
#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 

main (){
       int anio=0;
       
       printf("\n Ingrese un a%co ", 164);
       scanf("%i",& anio);
       printf("\n El a%co ingresado es %i", 164, anio);
       
       if (anio%4==0 && anio%100!=0 || anio%400==0){ // condiciones para determinar si es o no bisiesto
       printf("\n\n\n El a%co %i es bisiesto  ",164,anio); }
       
       getch();
       }
     
