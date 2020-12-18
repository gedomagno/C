/*Arreglo como parametro de una funcion con lo que se modifica cada elemento del arreglo*/
#include<stdio.h>

int cambio(int arreglo[]);

int main(){
    int i=0;
    int arreglo[5];

    for(i=0;i<5;i++){       //llenado del arreglo
        arreglo[i]=i;
    }

    for(i=0;i<5;i++){       //imprimo el arreglo
        printf("\n El elemento %i del arreglo es %d", i,arreglo[i]);
    }

    printf("\n Los elementos modificados del arreglo son %i",cambio( arreglo[5]));

return 0;
}

int cambio(int arreglo[i]){
    int i=0;
    for(i=0;i<5;i++){
        arreglo[i]=100;
    }
return arreglo[i];
}
