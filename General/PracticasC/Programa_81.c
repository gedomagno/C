/*Notacion de apuntador y notacion de arreglo*/

#include<stdio.h>

int main(){
    int i=0;
    int arreglo[10];
    int* apArreglo=arreglo;

    for(i=0;i<10;i++){              //llenado del arreglo
        arreglo[i]=i;
    }
    printf("\n------------------NOTACION DE APUNTADOR--------------------");

    printf("\n La notacion de apuntador esta ligada a un arreglo y especifica que un arreglo se puede manipular por medio del apunatdor");
    printf("\n con solo sumar constantes al apunatdor");
    printf("\n nombreApuntador = nombreApuntador + x");

    printf("\n\n--------------NOTACIUON DE ARREGLO-----------");
    printf("\n implica recorrer un arreglo por medio del apuntador como si este(el apuntador) fuera un arreglo");
    printf("nombreApuntador[x]");



return 0;
}
