/* Programa que genera una cuenta ascendente desde 1 hsta un limite dado por 
   el usuario.
   Realizo Gerardo Maldonado
   15-Agosto-2014, 12:50 */
   
# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

main (){ 

      int limite=0;
      int cuenta=1;
      
      printf ("Introduzca un limite deseado ");
      scanf("%i", &limite);
      
      while (cuenta<=limite){
      
      printf("%d",cuenta);
      cuenta ++;
          
      }
      getch ();
      }    
