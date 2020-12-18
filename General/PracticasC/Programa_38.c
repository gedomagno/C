/*Programa que muestra de 1 a un limite dado por el usuario*/

#include<stdio.h>

int main(){
    int i=1;
    int lim=0;

    printf("Ingrese un numero ");
    scanf("%d", &lim);

    for(i=1;i<=lim;i++){
        printf("%d ",i);
    }


return 0;
}
