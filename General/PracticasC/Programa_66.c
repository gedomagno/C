/*Programa que compara dos numeros por medio de apuntadores*/

#include<stdio.h>

int main(){
    int num1=0;
    int num2=0;
    int*appNum1;
    int*appNum2;

    appNum1=&num1;
    appNum2=&num2;

    printf("Introduzca un numero ");
    scanf("%d", &num1);
    printf("Introduzca otro numero ");
    scanf("%d", &num2);

    if(*appNum1==*appNum2){
        printf("Los numeros ingresados son identicos");
    }else
    printf("Los numeros son diferentes ");

return 0;
}
