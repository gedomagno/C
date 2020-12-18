/* Programa que muestra el uso de arreglos
   Realizado por Gerardo Maldonado
   19-Agosto-2014, 12.04 */
   
# include<stdio.h>   
# include<conio.h>
# include<stdlib.h>

main () {
       char nomUser[5];
       int numcajon=0;
       
       printf("\n\n\t Dame una letra ");
       scanf("%s", &nomUser[0]);  //ocupo %s porque el la letra a ingresar y el enter se consideran como una cadena 
       printf("\n\n\t Dame una letra ");
       scanf("%s", &nomUser[1]);
       printf("\n\n\t Dame una letra ");
       scanf("%s", &nomUser[2]);
       printf("\n\n\t Dame una letra ");
       scanf("%s", &nomUser[3]);
       printf("\n\n\t Dame una letra ");
       scanf("%s", &nomUser[4]);
       
       printf("\n\n\t La letra 1 es %c", nomUser[0]);
       printf("\n\n\t La letra 2 es %c", nomUser[1]);
       printf("\n\n\t La letra 3 es %c", nomUser[2]);
       printf("\n\n\t La letra 4 es %c", nomUser[3]);
       printf("\n\n\t La letra 5 es %c", nomUser[4]);
       
       printf("\n\n\t El arreglo contiene %s ", nomUser);
       
       printf("\n\n\t Escoge un cajon del arreglo");
       scanf("%d", &numcajon);
       
       printf("\n\n\t El contenido del cajon escogido es %c", nomUser[numcajon-1]);
       getch();
       }       
       
       

