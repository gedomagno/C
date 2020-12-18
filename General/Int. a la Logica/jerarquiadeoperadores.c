/* Programa que muestra la jerarquia de los operadores aritmeticos
   Realizado por Gerardo Maldonado
   14-Agosto-2014, 3:13 
*/

//librerias

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

main (){
        int ecuacion=0;
        
        ecuacion=3+9/8*7-1;
        
        printf("El resultado de 3+9/8*7-1 es: %i", ecuacion); 
        
        getch ();
        }
/* el orden de las operaciones realizadas para obtener el 9 es: 3+[(9/8)*7]-1
El valor exacto es 9.875 sin embargo el programa solo despliega el valor entero
En caso de querer saber el residuo se deberia de aplicar la operacion modulo*/
