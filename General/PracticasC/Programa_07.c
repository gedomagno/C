/*Programa que imprime del 1 al 40 y en cada multiplo de 10, se genera un salto a la derecha
La condicion del if es valida cuando ésta vale 1 y es falsa con valor de cero*/

#include<stdio.h>

int main(){
    int c=0;
    while(c<40){
        c++;
        if(c%10){
            printf("\t\n%d",c);
        }else{
            printf("\n\t%d \t\n",c);
        }
        printf("\n\n\t");

    }

return 0;
}
