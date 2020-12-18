/*Arreglo de estructiuras. Se llenan los campos de las estructuras y se imprimen*/

#include<stdio.h>

struct alumnos{
    char nombre[10];
    char apellido[20];
    char sexo;
};

int main(){
    struct alumnos miArr[3];
    int i=0;

    for(i=0;i<3;i++){
    printf("\n Ingrese el nombre ");
    scanf("%s",&miArr[i].nombre);
    printf("\n Ingrese el apellido ");
    scanf("%s",&miArr[i].apellido);
    printf("\n Ingrese el sexo ");
    scanf(" %c",&miArr[i].sexo);
    }

    printf("\n Los datos ingresados son ");

    for(i=0;i<3;i++){
    printf("\n Nombre[%i]:%s",i+1,miArr[i].nombre);
    printf("\n Apellido[%i]:%s",i+1,miArr[i].apellido);
    printf("\n Sexo[%i]:%c",i+1,miArr[i].sexo);
    }


return 0;
}
