/*Llenado e impresion de campos de una estructura por medio de un apuntador a esa estructura*/
#include<stdio.h>

struct persona{
    char nombre[30];
    int edad;
    char ocupacion[20];
    char sexo;
};

int main(){
    struct persona var1;
    struct persona*appVar1=&var1;

    printf("\n Introduzca el nombre de la persona ");   //ingreso de valores por medio de apuntadores
    scanf("%s",&appVar1->nombre);
    printf("\n Introduzca la edad de la persona ");
    scanf("%i",&appVar1->edad);
    printf("\n Introduzca la ocupacion de la persona ");
    scanf("%s",&appVar1->ocupacion);
    printf("\n Introduzca el sexo de la persona ");
    scanf(" %c", &appVar1->sexo);

    printf("\n El nombre de la persona es %s \n tiene %i anos, trabaja como %s y su sexo es %c \n",appVar1->nombre,appVar1->edad,appVar1->ocupacion,appVar1->sexo);
return 0;
}
