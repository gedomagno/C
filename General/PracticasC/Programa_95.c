/*Barrido de un arreglo por medio de un apuntador, NOTACION DE ARREGLO. La notacion es en el nombre del apuntador*/

#include<stdio.h>

int main(){
    int arreglo[5]={0,1,2,3,4};
    int*appArr=&arreglo[0];
    int i=0;

    for(i=0;i<5;i++){
        printf("\n El elemento %i del arreglo es %i",i, appArr[i]);     //imprimo los elementos del arreglo pero por medio de un apuntador a el

    }

return 0;
}
