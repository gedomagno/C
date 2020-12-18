#include<stdio.h> //prg que utiliza la instruccion continue

main(){
       int i=0,n;
       printf("Dame un numero <10\n");
       scanf("\n",&n);
       if(n>10)
         printf("El numero es mayor a 10");
       else
         {
             for(i=0; i<=n;i++)
                {if(i==0)
                 continue; // la instruccion ignora lo que hay debajo del ciclo y regresa al principio del mismo
                 printf("%i\n",i);
                }
         }
       getch();
       }
