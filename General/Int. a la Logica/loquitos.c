/* Programa loquitos
   Realizo Gerardo Maldonado
   19-Agosto-2014, 12:33; */
   
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main (){
     
     char nombre[10];
     char escuela[10];
     char hobbys[15];
     int  edad[10];
     char vivienda[10];
     char estadocivil[15];
     
     printf("\n como te llamas?");
     scanf("%s", &nombre);
     
//     printf("\n\n\t\t\t Pensando");
//     getch();
     
     printf("\n que bonito nombre tienes %s y dime en que escuela vas?", nombre);
     gets(escuela);
//     scanf("%s", &escuela);

//   printf("\n\n\t\t\t Pensando");
//   getch();
     
     printf("\n neta!? que bien yo voy tambien voy en ");
     puts(escuela);

//   puts(escuela);
   getch();
     
     printf("\n y cuantos anios tienes %s? ",nombre );
     scanf("%i", &edad);
     
     printf("\n tienes %i? te ves mucho mas joven %s ", edad, nombre );
     
     getch();

     }   
   
   
