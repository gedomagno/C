/*Programa que determina si un año es bisiesto o no
Un año es bisiesto si:
1) es divisible entre 4 y no entre 100
2) es divisible entre 4 y entre 100 y entre 400
de otro modo no es bisiesto*/

#include<stdio.h>

int main(){
    int ano=0;

    printf("introduzca un a%co ",164);
    scanf("%d",&ano);

    if((ano%4==0 && ano%100!=0) || (ano%4==0 && ano%100==0 && ano%400==0))
        printf("%d es un a%co bisiesto",ano,164);
    else{
        printf("%d no es un a%co bisiesto", ano,164);
        }

return 0;
}
