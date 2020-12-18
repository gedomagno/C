/*Notacion de apuntadores en el nombre del arreglo y notacion de arreglo en el nombre del arreglo*/

#include<stdio.h>

int main(){
    int arreglo[5]={0,1,2,3,4};
    //int appArr=&arreglo[0];
    int i=0;

    for(i=0;i<5;i++){
        printf("\n El elemento %i del arreglo es %i", i, *(arreglo+i));     //notacion de apuntadores en el nombre del arreglo
    }

    printf("\n----------------");

    for(i=0;i<5;i++){
        printf("\n El elemento %i del arreglo es %i",i, arreglo[i]);        //Notacion de arreglo en el nombre del arreglo

    }

return 0;
}
