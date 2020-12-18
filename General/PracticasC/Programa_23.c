/*Programa que imprime una cuenta regresiva desde un limite dado por el usuario hasta cero*/

#include<stdio.h>

int main(){

    int cont=0;

    printf("Introduzca un numero");
    scanf("%i",&cont);

    while(cont>0){
        printf("%i,",cont);
        cont--;

    }

return 0;
}
