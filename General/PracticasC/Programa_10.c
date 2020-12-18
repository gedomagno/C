/*Programa que muestra el uso de constantes globales, la cual se
especifica en el lugar de las cabeceras*/
#include<stdio.h>
#define miconstante 100 //CONSTANTE GLOBAL

int main(){
        int num1=0;

        printf("Introduzca un numero");
        scanf("%d",&num1);

        printf("\t\n%d",num1*miconstante); //Aqui uso mi el nombre de mi constante global

return 0;
}
