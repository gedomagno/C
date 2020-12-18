/*Programa que muestra el residuo de una division*/

#include<stdio.h>

int main(){
    int num1=10;
    int num2=2;
    int res=0;

    res=num1%num2;
    printf("El residuo de %i / %i es %d",num1,num2, res);

return 0;
}
