/* Programa que muestra el uso de variables, la funcion scanf y 
   la impresion de simbolos reservados 
   Realizado por Gerardo Maldonado
   14-Agosto-2014, 5:16*/
   
//librerias

# include<stdio.h>   
# include<conio.h>
# include<stdlib.h>

main (){
       int edadusuario=0;
       printf("\n Introduzca su edad ");
       scanf("%i", & edadusuario); // el tipo de dato y la variable a la cual le asigno ese valor
       
       printf ("\n Su edad en a%cos es %i", 164, edadusuario); 
       
       getch ();
       }

/* para sacar la ñ necesite ocupar un %c y nombrar al codigo ascii
   correspondiente a la misma*/
