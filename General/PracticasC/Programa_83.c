/*Arreglo de apuntadores. Se imprimen los valores de los arreglos por medio de un arreglo de apuntadores*/

#include<stdio.h>

int main(){
    int i=0;
    int arr1[10];
    int arr2[10];

    int*arr[10];          //arreglo de apuntadores

    for(i=0;i<10;i++){      //llenado de arreglos
        arr1[i]=i;          //valores de arr1 de 0 a 9
        arr2[i]=10+i;       // valores de arr2 de 10 a 19
    }

    arr[0]=&arr1[0];        //el apuntador 0 del arreglo apunta al arreglo 1
    arr[1]=&arr2[0];        //el apuntador 1 del arreglo apunta al arreglo 2

    printf("\n El cuarto elemento del primer arreglo es %i", arr[0][3]);    //imprimo los valores del arreglo por medio del apuntador que lo apunta
    printf("\n El primer elemento del segundo arreglo es %i", arr[1][0]);   // se utiliza una notacion de matriz!



return 0;
}
