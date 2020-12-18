/*Programa que muestra una cuenta descendente desde un limite superior hasta 1, mediante un ciclo for*/

#include<stdio.h>

int main(){
    int i=0;
    int num=0;

    printf("Introduzca un numero");
    scanf("%d", &num);
    for(i=num;i>=1;i--){
        printf("%d ",i);
    }

return 0;
}
