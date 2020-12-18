/* Programa que realiza una cuenta ascendente o descendente desde un limite inferior hasta un limite superior o viceversa
   Realizado por Gerardo Maldonado
   17-Agosto-2014, 6:29 */

# include <stdio.h>   
# include <conio.h>
# include <stdlib.h>

main () {
     
     int liminf=0;
     int limsup=0;
     int ayc=0;
     
     printf("\n Intrduzca un primer numero ");
     scanf("%i", &liminf);
     printf("\n El limite inferior es %i", liminf);
     printf("\n Intrduzca un segundo numero ");
     scanf("%i", &limsup);
     printf("\n El limite superior es %i", limsup);
     printf("\n Introduzca 1 si desea cuenta ascendente o 0 si desea cuenta descendente" );
     scanf("%i", &ayc);

    if (ayc==1){
     while(liminf<=limsup){
                           printf(" %i", liminf);
                           liminf ++; }
                } 
     else{if(ayc==0) while(limsup>=liminf)
                     {  printf(" %i", limsup);
           limsup --;}
                }
 getch();
           }

     
