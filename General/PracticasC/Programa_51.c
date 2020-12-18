/*Programa que imprime los elementos de una matriz de 3x2*/

#include<stdio.h>

int main(){
    int matriz[3][2]={{1,2},{3,4},{5,6}};
    int i=0;
    int j=0;

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
        printf("\n renglon %i, columna %i = %i", i,j,matriz[i][j]);
    }
    }
return 0;
}
