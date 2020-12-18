/*Programa que inicializa un arreglo de 10 elementos con solo dar el valor de un elemento*/
#include<stdio.h>

int main(){
    int miArreglo[10]={ };      //inicializo todos los elementos de mi arreglo a cero.
//    int miArreglo[10]={0};    //OTRA FORMA DE INICIALIZAR A CERO MI ARREGLO

    int i=0;
    int j=0;

    char miArreglo1[15]={ }; //incializo los elementos de mi arreglo de caracteres a nada!
//    char miArreglo1[15]={" "}; //OTRA FORMA DE INCIALIZAR LOS ELEMENTOS A NADA

    for(i=0;i<9;i++)
        printf("\n%d",miArreglo[i]);

    for(j=0;j<14;j++)
        printf("\n%c", miArreglo1[j]);

return 0;
}
