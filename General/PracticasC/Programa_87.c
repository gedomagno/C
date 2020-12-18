/*Programa que pide datos del usuario y llena una estructura y luego los imprime*/
#include<stdio.h>

struct deportista{
    char nombre[50];
    char deporte[30];
    int numero;
    char club[20];
    int medallas;
};

int main(){
    struct deportista var1;

    printf("\n Introduzca el nombre del deportista ");      //llenado de mi estructura
    scanf("%s",&var1.nombre);
    printf("\n Introduzca el deporte ");
    scanf("%s",&var1.deporte);
    printf("\n Introduzac el numero del deportista ");
    scanf("%i",&var1.numero);
    printf("\n Introduzca el club ");
    scanf("%s",&var1.club);
    printf("\n Introduzac el numero de medallas ");
    scanf("%i",&var1.medallas);

    printf("\n Los datos recabados fueron ");
    printf("\n La persona %s practica %s con el numero %i \n en el club %s y ha ganado %i medallas", var1.nombre,var1.deporte,var1.numero,var1.club,var1.medallas);



return 0;
}
