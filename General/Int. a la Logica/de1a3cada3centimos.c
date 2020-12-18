/* Programa que va de 1 a 3 cada 3 centimos.
   Realizado por Gerardo Maldonado
   18-Agosto-2014, 23:25 */

# include<stdio.h>
# include<conio.h>
# include<stdlib.h>

main () {
     
     float num1=1;
     float num2=3;
     
     while (num1<=num2) {
           printf("%1.3f ", num1);
           num1+=0.003;
           }
           getch();
     }
