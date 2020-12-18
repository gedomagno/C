/*Apuntador a arreglo, notacion de apuntador y notacion de arreglo
Se recorre un arreglo por medio de un apuntador*/

#include<stdio.h>

int main(){
    int arreglo[10];
    int i=0;

    for(i=0;i<10;i++){
        arreglo[i]=i;
    }

    int*apArreglo=&arreglo[0];     //apunto el apuntador a un arreglo, a su primer elemento

    printf("----------NOTACION DE APUNTADOR---------");

    apArreglo=apArreglo+1;        //recorro el apuntador una posicion, por lo que ahora apunto al segundo elemento del arreglo. SIEMPRE ASIGNAR LOS CAMBIOS A UNA VARIABLE

    printf("\n El elemento apuntado por el apuntador es %i",*apArreglo);

    printf("\n\n---------NOTACION DE ARREGLO-------");

    printf("\n El tercer elemento del arreglo es %i",apArreglo[1]);       //imprimo el arreglo atraves de un puntero con notacion de arreglo. Aqui aunque el indice sea 1, se imprime el tercer
                                                                          //elemento del arreglo debido a que empieza desde donde se quedo el apuntador despues del incremento a 1

return 0;
}
