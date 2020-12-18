/*Programa que pide del usuario dos numeros y muestra en pantalla el resultado de las cuatro operaciones basicas*/

#include<stdio.h>

int main(){
    int num1=0;
    int num2=0;
    printf("\t\n Introduzca un numero");
    scanf("%i",&num1);
    printf("\t\n Introduzca otro numero");
    scanf("%i",&num2);

    printf("\t\n La suma de los dos numeros es %i: ",num1+num2);
    printf("\t\n La resta de los dos numeros es %i ", num1-num2);
    printf("\t\n La multiplicacion de los dos numeros es %i",num1*num2);
    printf("\t\n La division de los dos numeros es %i",num1/num2);

return 0;
}
