/*Programa que pide datos, los almacena en arreglos de letras y los imprime*/

#include<stdio.h>

int main(){
    char nombre[10];
    char escuela[10];

    printf("\n Como te llamas? ");
    scanf("%s",&nombre);
    printf("\n Cual es el nombre de tu escuela? ");
    scanf("%s", &escuela);

    printf("\n Mucho gusto %s yo tambien voy en la escuela %s", nombre, escuela);

return 0;
}
