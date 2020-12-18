/*Programa de arreglos*/

#include<stdio.h>
    int tam=5;

void imprimirArreglo(int arreglo[]){
    int i=0;
    for(i=0;i<tam;i++){
        printf("Elemento %i=%d con direccion %.4x\n", i, arreglo[i], &arreglo[i]);
    }
}

double calculaPromedio(){
        double arreglo;
        double suma=0, promedio=0;
        int i=0;
        for(i=0;i<tam; i++){
            suma+=arreglo[i];
        }
        promedio=suma/tam;
        return promedio;
}

 int main(){
    int arreglo[tam];
    double promedio=0;

    arreglo[0]=10;
    arreglo[1]=9;
    arreglo[2]=0;
    arreglo[3]=10;
    arreglo[4]=6;

    imprimirArreglo(arreglo);

    printf("El promedio de los elementos del arreglo es %d", promedio);

 return 0;


 }
