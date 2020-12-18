/* Programa que determina si un numero es par o impar
   Realizado por Gerardo Maldonado
   14-Agosto-2014, 8:12 */
   
// librerias

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

main () {
        int num=0;
        
        printf(" \n Ingrese un numero " );
        scanf("%i", & num);
        printf(" \n El numero ingresado es %i", num);
            
        if (num ==0) {
        printf(" \n\n El numero ingresado es el cero y no es par ni par ");}

        if (num!=0 && (num % 2)==0){ 
        printf(" \n\n El numero ingresado es par");}
                
        if ((num %2)!=0) {
        printf(" \n\n El numero ingresado es impar");}
          
        getch ();
        }
