/* Programa que representa el uso del for, cuenta que va de x a y y visceversa
   Realizo Gerardo MM.
   21-Agosto-2014, 11:40 */
   
# include<stdio.h>   
# include<conio.h>   
# include<stdlib.h>   

main() {
        
   int liminf=0;
   int limsup=0;
   int aod=0;
      
   printf("Dame un liminf ");
   scanf("%i", &liminf);
   printf("Dame un limsup ");
   scanf("%i", &limsup);
   printf("aprieta 1=ascendente, 0=descendente... ");
   scanf("%i", &aod);

   if (aod==1) 
      { for(liminf; liminf<=limsup; liminf++)
              {printf("%d ", liminf);}
               }
   else
      { if(aod==0) 
        for(limsup; limsup>=liminf; limsup--)
              {printf("%d ", limsup);}
               }
                   
   getch();
      }
