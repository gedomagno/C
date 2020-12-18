/*Programa que determina el sueldo bruto,neto y el descuento de impuestos de una cantidad*/
#include<stdio.h>

int main(){
    float sueldo=0;
    float descuento=0;

    printf("Ingrese el sueldo bruto: ");
    scanf("%f", &sueldo);
    printf("Sueldo bruto=%.2f\n", sueldo);
    descuento=sueldo*.16;
    printf("descuento =%.2f\n",descuento);
    sueldo=sueldo-(sueldo*.16);
    printf("Sueldo neto %.2f\n", sueldo);

return 0;
}
