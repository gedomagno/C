/*Apuntador a estructura y uso de malloc para reservar espacio en memoria dinamica*/

#include<stdio.h>

struct alumno{
    char nombre[20];
    int grado;
    char sexo;
};

int main(){
    struct alumno var1;
    struct alumno*appEst;
    appEst=malloc(sizeof(struct alumno));       //aqui no hago el casteo al apuntador

    if(appEst==NULL){
        printf("La memoria no se pudo reservar");
    }else{

    printf("\n Introduzca el nombre del alumno ");
    scanf("%s",&appEst->nombre);
    printf("\n Introduzca el grado del alumno ");
    scanf("%i",&appEst->grado);
    printf("\n Introduzca el sexo del alumno ");
    scanf(" %c",&appEst->sexo);

    printf("\n %s es alumno del grado %i y del sexo %c ",appEst->nombre,appEst->grado,appEst->sexo);
    }

    free(appEst);
return 0;
}
