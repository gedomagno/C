/*Notacion de arreglos y notacion de apuntadores.*/
#include<stdio.h>

int main(){
    int arreglo[10]={0,1,2,3,4,5,6,7,8,9};
    int*appArr=&arreglo;
    printf("\n El primer elemento del arreglo es %i", *appArr);     //notacion de apuntadores
    printf("\n El segundo elemento del arreglo es %i",*(appArr+1)); //despazamiento dentro del arreglo mediante el apuntador
    printf("\n El tercer elemento del arreglo es %i", arreglo[2]);
    appArr=appArr+3;                                                //NOTACION DE APUNATDORES muevo el apuntador atraves de los elementos del arreglo sumando constantes al apuntador
    printf("\n El cuarto elemento del arreglo es %i",*appArr);
    printf("\n El quinto elemento del arreglo es %i",appArr[1]);   //NOTACION DE ARREGLOS

return 0;
}
