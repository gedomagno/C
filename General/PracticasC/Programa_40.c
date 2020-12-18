/*Programa que utiliza un switch para implementar una calculadora*/

#include<stdio.h>

int main(){
    int sel=0;
    int num1=0;
    int num2=0;

    printf("\n 1. Suma de dos numeros");
    printf("\n 2. Resta de dos numeros");
    printf("\n 3. Multiplicacion de dos numeros");
    printf("\n 4. Division de dos numeros");
    printf("\n\t\t\t\n Seleccione la operacion deseada ");
    scanf("%i", &sel);

    printf("\t\n Introduzca un numero ");
    scanf("%i",&num1);
    printf("\t\n Introduzca otro numero ");
    scanf("%i", &num2);

    switch(sel){
case 1:
       printf("%i + %i = %i", num1,num2,num1+num2);
       break;
case 2:
    printf("%i - %i = %i", num1,num2,num1-num2);
    break;
case 3:
    printf("%i * %i = %i ", num1,num2,num1*num2);
    break;
case 4:
    printf("%i / %i = %i", num1,num2, num1/num2);
     break;
default:
    printf("Opcion no permitida");
    break;
    }

return 0;
}
