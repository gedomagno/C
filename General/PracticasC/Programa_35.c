/*Programa que realiza suma de dos numeros hasta cuando el usuario decida */

#include<stdio.h>

int main(){
    int num1=0;
    int num2=0;
    int res=0;
    char des;

    do{
    printf("\n Introduzca un numero ");
    scanf("%d", & num1);
    printf("\n Introduzca otro numero ");
    scanf("%d", & num2);

    res=num1+num2;
    printf("\n El resultado de %i + %i es %i", num1, num2, res);
    printf("\n Desea realizar otra suma?");
    scanf("%c ", & des);

    }while(des=='s' || des=='S');

return 0;
}
