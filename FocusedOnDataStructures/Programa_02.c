/*Programa que usa variable static*/
#include<stdio.h>

int cuenta(){
     int contador=0;
    contador++;
    return contador;
}

int main(){
    int i=0;
    for(i=0;i<10;i++)
        printf("contador vale=%d\n", cuenta());

return 0;
}
