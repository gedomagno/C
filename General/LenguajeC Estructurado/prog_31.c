#include<stdio.h> //suma de dos numeros mediante funciones
 int suma(int a, int b);
 
 main(){
        int num1,num2,resultado;
        printf("Dame el primer numero\n");
        scanf("%d",&num1);
        printf("Dame el segundo numero\n");
        scanf("%d",&num2);
        resultado=suma(num1,num2);
        printf("El resultado de la suma es %d", resultado);
        getch();
        }
        
int suma(int a, int b)
{
    int relfun;
    relfun=a+b;        
    return relfun;
}
