/*Programa que utiliza funciones para implementar las operaciones basicas*/

#include<stdio.h>
int suma(int, int);
int resta(int, int);
int multiplicacion(int, int);
float division (float, float);

int main(){
        int num1=0;
        int num2=0;
        int op=0;

        printf("\n Introduzca dos numeros separados por coma ");
        scanf("%d , %d", &num1,&num2);
        printf("\n Que operacion desea realizar?");
        printf("\n 1) Suma");
        printf("\n 2) Resta");
        printf("\n 3) Multiplicacion");
        printf("\n 4) Division \n ");
        scanf("%d", &op);

        switch(op){
    case 1:
        printf(" %d + %d = %d", num1,num2, suma(num1,num2));
        break;
    case 2:
        printf("%d - %d = %d", num1,num2, resta(num1,num2));
        break;
    case 3:
        printf("%d * %d = %d", num1,num2, multiplicacion(num1,num2));
        break;
    case 4:
        printf("%d / %d = %.2f", num1,num2, division((float)num1,(float)num2));
        break;
    default:
        printf("Rectifique su elección");
        break;
        }
return 0;
}

int suma(int a, int b){
return (a+b);
}

int resta(int a,int b){
return (a-b);
}

int multiplicacion(int a, int b){
return(a*b);

}
float division(float a, float b){
return (a/b);
}
