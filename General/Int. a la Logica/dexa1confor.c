/* Programa que muestra el uso del for: cuenta de x a 1
   Realizo Gerardo Maldonado
   22-Agosto-2014, 1:16 */
   
# include<stdio.h>   
# include<conio.h>
# include<stdlib.h>

main() {
       
       int num=0;
       int cuenta=0;
       
       printf("Introduzca un numero ");
       scanf("%i", &num);
       
       for(cuenta=num; cuenta>=1; cuenta--)
       { printf("%i ", cuenta);
            }
       getch();
       
       }
