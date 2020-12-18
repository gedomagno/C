//pregunta la dimension del arreglo, pide los valores y los imprime

#include<stdio.h>

main(){
       int filas,columnas,i,j;
       int arreglo[5][5];
       
       printf("Dame el numero de filas del arreglo a generar");
       scanf("%i",&filas);
       printf("Dame el numero de columnas del arreglo a generar");
       scanf("%i",&columnas);
       
       for(i=0; i<=filas; i++)
           {
            for(j=0; j<=columnas; j++)
               {
                printf("Dame un valor");     
                scanf("%i",&arreglo[5][5]);
               }
           }     
       getch();  
       }

