/*Programa que hace una suma de dos numeros mediante una funcion*/

#include<stdio.h>
int suma(int,int);

int main(){
    int a=0;
    int b=0;
    int resultado=0;

    printf("\n Introduzca un numero ");
    scanf("%d",&a);
    printf("\n Introduzca otro numero ");
    scanf("%d",&b);

    suma(a,b);
    printf("%d",suma(a,b)); //aqui se imprime lo que regresa la funcion suma a la funcion main
    printf("\n");
    resultado=suma(a,b); //aqui le asigno lo que regresa suma a una variable resultado en main y luego solo la imprimo
    printf("%d",resultado);

return 0;
}

int suma(int x,int y){
    int num3;
    num3=x+y;

return num3;
}
