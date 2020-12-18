/*Programa que pasa por referencia un parametro a la funcion suma, se obseva que se modifica en suma, el valor de
a la cual esta declarada en main*/
#include<stdio.h>

int suma(int*a, int b);

int main(){

    int num1=10;
    int num2=5;
    int res=0;
    int*appNum1;
    appNum1=&num1;

    printf("%d + %d =%d", num1,num2, suma(&num1, num2));
    printf("\n El valor de num1 despues de llamar a la funcion suma es %d", num1);

return 0;
}

int suma(int*a,int b){
    int res=0;
    res=*a+b;
    *a=0;           //modifico el valor de a declarada en main
return (res);
}
