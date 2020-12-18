/* Programa que va de x a y con dowhile 
    Realizo Gerardo Maldonado
    22-Agosto-2014 3:52 */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main (){
     
     int liminf=0;
     int limsup=0;
     int cuenta=0; 
     int aod=0;
     
     printf("Ingrese un limite inferior ");
     scanf("%i", &liminf);
     printf("Ingrese un limite superior ");
     scanf("%i", &limsup);
     printf("Tecle 1 si desea CA y 0 si desea CD ");
     scanf("%i", &aod);
     
     if (aod==1){
                 do { printf("%i ", liminf);
                      liminf++;
                     }while(liminf<=limsup);
                }     
                
      else { if(aod==0) do { printf("%i ", limsup);
                             limsup--;
                           }while(limsup>=liminf);           
           }                      
     getch();
     }
