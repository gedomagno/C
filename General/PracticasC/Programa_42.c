/*Programa que pide un numero, si este es mayor a 10 imprime mensaje y de otra manera imprime desde cero hasta el numero ingresado*/

#include<stdio.h>

int main(){
    int num=0;
    int i=0;
    printf("Introduzca un numero menor a 10 ");
    scanf("%i",&num);

    if(num>10){
        printf("El numero ingresado es mayor a 10");
    }else {
        for(i=0;i<=num;i++){
            printf("%i",i);
        }
    }

return 0;
}
