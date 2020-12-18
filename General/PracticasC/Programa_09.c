/*Programa que calcula el factorial de un numero ingresado por el usuario*/

#include<stdio.h>

int main(){
    int n=0;
    int cont=1;
    int fact=1;

    printf("\t\n Ingrese un numero entero mayor a cero: ");
    scanf("%d", &n);

   while(n>=cont){
         fact=fact*cont;
         cont++;}
     printf("\t\n%d",fact);

return 0;
}
