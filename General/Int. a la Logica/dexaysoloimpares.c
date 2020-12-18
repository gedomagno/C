/* Programa que va de un numero a otro e imprime solo los impares
   Realizo Gerardo Maldonado
   19-Agosto-2014,8:49 */
   
# include<stdio.h>   
# include<conio.h>
# include<stdlib.h>

main() {
       
       int liminf=0;
       int limsup=0;
       int aod=0;
       
       printf("\n dame el lim inf ");
       scanf("%i", &liminf);
       printf("\n dame el lim sup ");
       scanf("%i", &limsup);
       printf("\n Teclee 1 para CA o 0 para CD ");
       scanf("%i", &aod);
       
       if(aod==1)
       { while(liminf<=limsup){if(liminf%2!=0)
                                 {printf("%i ", liminf);}
                                 liminf++; }
       } else {
            if(aod==0) while(limsup>=liminf) {if(limsup%2!=0)
                                                {printf("%i ", limsup);}
                                                 limsup++;}
             }                  

       getch(); 
       }
