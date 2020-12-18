/*Programa que utiliza el sizeof para saber cuantos bytes usa cada tipo de dato*/

#include<stdio.h>

int main(){
    int entero=10;      //4 bytes
    float flotante=2.5; //4 bytes
    char caracter='a';  //1 byte
    double doble;       //8 bytes
    int arreglo[3];     //12 bytes
    short int enterocorto=2;    //2 bytes
    long double largo;         //12 bytes

    printf("\n El tamano de un entero es %i bytes ",sizeof(entero));
    printf("\n El tamano de un flotante es %i bytes ",sizeof(flotante));
    printf("\n El tamano de un caracter es %i bytes ",sizeof(caracter));
    printf("\n El tamano de un doble es %i bytes ",sizeof(doble));
    printf("\n El tamano de un arreglo de enteros es %i bytes ",sizeof(arreglo));
    printf("\n El tamano de un entero corto es %i bytes ",sizeof(enterocorto));
    printf("\n El tamano de un doble largo es %i bytes ",sizeof(largo));

return 0;
}
