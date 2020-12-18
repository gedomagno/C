/* Programa que realiza una cuenta ascendente-descendente y muestra solo los numeros primos
   Realizado por Gerardo Maldoando
   18-Agosto-2014, 21:38 */
   
# include <stdio.h>   
# include <conio.h>
# include <stdlib.h>

main (){
     
     int liminf=0;
     int limsup=0;
     int aod=0;
     
     printf("\n Introduzca el limite inferior ");
     scanf("%i", &liminf);
     printf("\n Introduzca el limite superior ");
     scanf("%i", &limsup);
     printf("\n Presione 1 para CA o 0 para CD ");
     scanf("%i", &aod);
     
     if(aod==1)
       {while(liminf<=limsup)
             {if(liminf/liminf==1 && liminf/1==liminf)
                {printf("%i ", liminf);}
                 liminf++;
              }  
        } 
        else { while(limsup>=liminf)
                    {if (limsup/limsup==1 && limsup/limsup==limsup);
                       { printf("%i ", limsup);}
                        limsup --;
                    }
              }
     getch();
     }
