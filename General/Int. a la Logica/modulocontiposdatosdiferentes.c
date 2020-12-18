/* Programa para visualizar el modulo de dos numeros cuando estos no son enteros
   para ello, se puede utilizar una funcion o la regla de CAST
   Realizo Gerardo Maldonado
   13-Agosto-2014, 12.39
*/

//librerias

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

// main principal

main (){
     
     float num1=52;
     float num2=23;
     float res=0;
     /* la operacion modulo no puede realizarse en este caso ya que los datos de entrada se declararon float
        una forma de subsanar el problema es definiendo por un instante a los numeros como enteros esto se hace por 
        medio de la regla de CAST, otra forma de hacerlo es por medio del uso de una funcion ya definida "fmod" 
     */
     
     // res = (int)num1 % (int)num2; esta es la forma utilizando la regla de CAST
     // res = fmod(num1,num2); esta forma utilizando la funcion fmod
          
     printf("El resultado de %f mod %f es %f", num1, num2, res);
     
     getch ();
     
     }
     
