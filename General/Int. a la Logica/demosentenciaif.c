/* Programa que muestra el uso de la sentencia if
   Realizado por Gerardo Maldonado
   14-Agosto-2014, 6:02 */
   
// librerias

# include <stdio.h>   
# include <stdlib.h>
# include <conio.h>

main() { 
        int edadusuario=0;
        
        printf ( "\n %cQue edad tienes%c ", 168, 63);
        printf (" \n Tengo:");
        scanf ("%i", & edadusuario);
        
        if (edadusuario >=18) {
        printf(" Pasale");                    
                        }
        if (edadusuario <=18)  {
        printf ("No puedes pasar");
                        }
        getch ();
        }
