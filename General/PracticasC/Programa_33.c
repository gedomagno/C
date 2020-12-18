/*Programa que compara dos cadenas de caracteres por medio de strcmp
strcmp cuenta los caracteres de la cadena 1 y le resta los caracteres de la cadena 2
y con base en ello devuleve un numero (1, 0, -1)*/

#include<stdio.h>

int main(){
    char nombre1[10];
    char nombre2[10];
    int res=0;

    printf("\n Ingrese el primer nombre");
    scanf("%s", &nombre1);
    printf("\n Ingrese el segundo nombre");
    scanf("%s", &nombre2);

    res=strcmp(nombre1,nombre2);
    if(res==0){
        printf("La cadena 1 es mayor ");

    }
    printf("El valor de n es %i", res);

return 0;
}
