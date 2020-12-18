/*Programa que llena y muestra los datos de una estructura por medio de un apuntador a estructura*/

#include<stdio.h>

struct estudiante{
    char nombre[20];
    int edad;
    int grado;
    int promedio;
    int numCuenta;
};

int main(){
    struct estudiante var1;         // variable del tipo estructura estudiante
    struct estudiante*appEst;       //apuntador a estructura estudiante
    appEst=&var1;                   //Inicializo mi puntero a estructura con la direccion de la var1

    printf("\n Introduzca el nombre del alumno ");      //llenado de los campos de la estructura
    scanf("%s",&appEst->nombre);
    printf("\n Introduzca la edad del alumno ");
    scanf("%i",&appEst->edad);
    printf("\n Introduzca el grado del alumno ");
    scanf("%i",&appEst->grado);
    printf("\n Introduzca el promedio del alumno ");
    scanf("%i",&appEst->promedio);
    printf("\n Introduzca el numero de cuenta del alumno ");
    scanf("%i",&appEst->numCuenta);

    printf("\n El alumno %s tiene %i anos y pertenece al grado %i ",appEst->nombre,appEst->edad,appEst->grado);     //impresion de los campos de
    printf("\n su promedio es %i y su numero de cuenta es %i",appEst->promedio,appEst->numCuenta);                  //la estructura por medio de apuntador a
                                                                                                                    //estructura

return 0;
}
