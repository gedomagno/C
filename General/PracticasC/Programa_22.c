/*Programa que muestra una cuenta ascendente desde cero hasta un limite dado por el usuario*/

#include<stdio.h>

int main(){
    int cont=0;
    int lim=0;
    printf("Introduzca un limite");
    scanf("%i",&lim);

    while(cont<lim){
        printf("%i,",cont);
        cont++;

    }


return 0;
}
