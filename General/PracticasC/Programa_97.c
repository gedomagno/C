#include<stdio.h>

struct alumno{
    int cuenta;
    char nombre[10];
    int edad;
    char carrera[20];
};

void llenarDatos(struct alumno*);
void desplegarDatos(struct alumno*);
void menu(struct alumno*);

int main(){

    struct alumno grupo;  //variable LOCAL del tipo struct alumno
    struct alumno*appEst=&grupo;

    menu(appEst);       //tambien le puedo pasar como argumento "&grupo"

return 0;
}

void llenarDatos(struct alumno*appEst){      //según el prototipo la funcion requiere de una direccion a estructura para trabajar, la que le paso es la de grupo
    printf("\n Introduzca el nombre del alumno ");
    scanf("%s",&appEst->nombre);
    printf("\n Introduzca el numero de cuenta ");
    scanf("%i",&appEst->cuenta);
    printf("\n Introduzca la edad del alumno ");
    scanf("%i",&appEst->edad);
    printf("\n Introduzca la carrera del alumno ");
    scanf("%s",&appEst->carrera);
}

void desplegarDatos(struct alumno*appEst){ //según el prototipo la funcion requiere de una direccion a estructura para trabajar, la que le paso es la de grupo
    printf("\n Nombre: %s",appEst->nombre);
    printf("\n Cuenta: %i",appEst->cuenta);
    printf("\n Edad: %i",appEst->edad);
    printf("\n Carrera: %s",appEst->carrera);
}

void menu(struct alumno*appEst){     //la direccion que le paso es la de grupo
    int sel=0;

    while(1){
    printf("\n seleccione una opcion ");
    printf("\n 1. Introducir datos ");
    printf("\n 2. Mostrar datos ");
    printf("\n 3. Salir ");
    scanf("%i", &sel);

    switch(sel){
    case 1:
        llenarDatos(appEst);     //aqui le estoy pasando la direccion de la variable grupo
        break;
    case 2:
        desplegarDatos(appEst);      //aqui le paso la direccion de la variable grupo
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("\n Opcion no valida ");
        break;

    }
    }
}
