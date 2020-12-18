#include<stdio.h> //programa que imprime los elementos de una matriz
main()
{
 int i,j;// i recorre las filas, j las columnas
 
 int a[3][2]={{5,3},
              {0,1},
              {2,8}};
 
 for(i=0;i<3;i++)
 {
   for(j=0;j<2;j++)
   {   printf("fila: %i, columna %i = %i ", i,j,a[i][j]);       
                    }
   printf("\n");              
                 }
 getch();
 
}
