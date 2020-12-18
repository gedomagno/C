/*Programa que resuelve la ecuacion x+2y*y cuando x>y y resuleve la ecuacion sqrt((x*x)-(y*y)) cuando x<y
Se utiliza un if anidado*/

#include<stdio.h>

int main(){
    int num1=0;
    int num2=0;
    float res=0;

    printf("Introduzca un numero ");
    scanf("%i",&num1);
    printf("introduzca otro numero ");
    scanf("%d",&num2);

    if(num1>num2){
       printf("El resulatdo de %d + 2*%d%c=%d",num1,num2,253,num1+2*(num2*num2));
    }
    else if(num1<num2){
        printf("                   _______");
        printf("\n El resultado de %c/%d%c-%d%c = %d",191,num1,253,num2,253,sqrt (pow(2,num1)-pow(2,num2)));
    }

return 0;
}
