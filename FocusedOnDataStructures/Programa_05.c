/*Programa que determina con base en el mes y año ingresado si fue o no año bisiesto y el numero de dias que tiene el mes*/
#include<stdio.h>

int main(){
    int mes=0;
    int ano=0;
    int bandera=0;
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    printf("Ingrese el ano: ");
    scanf("%d, %d", &ano);

    if (ano%4==0){
        if(ano%100==0){
            if(ano%400==0){
                printf("bisiesto\n");
                bandera=1;
            }else{
                printf("No bisiesto\n");
            }
        }else{
            printf("bisiesto\n");
            bandera=1;
        }
    }else{
        printf("No bisiesto\n");
    }

    if(mes==2 && bandera==1)
        printf("29 dias");
    else if (mes==2 && bandera==0)
        printf("28 dias");
    else if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        printf("31 dias");
        else
        printf("30 dias");
}
