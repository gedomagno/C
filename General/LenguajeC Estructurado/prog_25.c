//pregunta la dimension de una matriz, pide los valores y los imprime

#include<stdio.h>

main(){
       int filas,columnas,i,j;
      
       printf("Dame el numero de filas del arreglo a generar\t");
       scanf("%i",&filas);
       printf("Dame el numero de columnas del arreglo a generar\t");
       scanf("%i",&columnas);

       int arreglo[filas][columnas]; //aqui declaro el arreglo una vez que sepa su dimension,  
                                     // antes no es posible declarar el tamaño de una variable con otra variable                     

       for(i=0; i<filas; i++)  // estos for me llenan el arreglo
           {
            for(j=0; j<columnas; j++)
               {
                printf("Dame un valor");     
                scanf("%i",&arreglo[i][j]);
               }
           }

       for(i=0; i<filas; i++)  //estos for me imprimen el arreglo
           {
            for(j=0; j<columnas; j++)
                printf("fila %i, columna %i =%i\n", i, j, arreglo[i][j]);     
           }  
       getch();  
       }

