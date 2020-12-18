/*Programa que determina si un numero es par o impar*/

#include<stdio.h>

int main(){
    int num=0;
    printf("Introduzca un numero");
    scanf("%d",&num);

    if(num%2==0)
       printf("El numero %i es par", num);
    else{
       printf("El numero %i es impar", num);
    }

return 0;
}
