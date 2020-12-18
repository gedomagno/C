/*Programa que pide dos numeros separados por una coma y muestra el valor de las cuatro operaciones basicas*/

#include<stdio.h>

int main(){
    int num1=0;
    int num2=0;
    printf("Introduzca dos numeros separados por una coma ");
    scanf("%i,%i",&num1,&num2);
    printf("\t\n %i+%i =%i ", num1,num2, num1+num2);
    printf("\t\n %i-%i=%i", num1,num2,num1-num2);
    printf("\t\n %i*%i=%i", num1,num2,num1*num2);
    printf("\t\n %i/%i=%i",num1,num2,num1/num2);

return 0;
}
