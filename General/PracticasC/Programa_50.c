/*Programa que inicializa un arreglo de una dimension e imprime sus elementos*/

#include<stdio.h>

int main(){
    int miArreglo[5]={1,2,3,4,5};
    int i=0;

    for(i=0;i<5;i++){
        printf("El elemento %d del arreglo es %d \n ", i, miArreglo[i]);
    }

return 0;
}
