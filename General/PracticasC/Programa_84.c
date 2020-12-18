/*Programa que reserva memoria dinamica con malloc. Para ocupar malloc incluir la libreria stdlib*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=10;
    int*appA;

    appA=(int*)malloc(sizeof(int));
    if(appA==NULL){
        printf("\n La direccion de memoria no se ha podido reservar");
    }else {
        printf("\n Memoria reservada");
    }

    *appA=5;        //aqui le pongo un 5 a la casilla apuntada por appA

    printf("\n La direccion dinamica reservada por medio de malloc es %x", appA);
    printf("\n La direccion donde se almacena appA es %p",&appA);
    printf("\n La direccion donde se guarda a es %p", &a);
    printf("\n El contenido de lo apuntado por appA es %i", *appA);
    printf("\n Ahora libero la memoria reservada con free ");

    free(appA);

    printf("\n Ahora liberada la memoria vuelvo a imprimir al contenido de lo apuntado por el apuntador %i",*appA);     //valores basura despues de haber borrado la memoria dinamica


return 0;
}
