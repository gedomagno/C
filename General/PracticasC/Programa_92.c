/*Paso por referencia de una estructura. El programa modifica una estructura dentro del main en otra funcion*/

#include<stdio.h>

    struct calificaciones{          //estructura global
        int mate;
        int ingles;
        int fisica;
    };

void modificar(struct calificaciones*);

int main(){

    struct calificaciones var1;     //var del tipo struct calificaciones LOCAL
    struct calificaciones *appVar1; //apuntador a una variable del tipo estructura (apuntador a estructura)
    appVar1=&var1;

    printf("\n Ingrese la cal de mate ");       //ingreso los valores a la estructura por medio de su apuntador
    scanf("\%i",&appVar1->mate);
    printf("\n Ingrese la cal de ingles ");
    scanf("\%i",&appVar1->ingles);
    printf("\n Ingrese la cal de fisica ");
    scanf("\%i",&appVar1->fisica);

    modificar(&var1);               //llamada de la funcion modificar y le paso la direccion de la variable de tipo estructura

    printf("\n El nuevo valor de mate es %i ",var1.mate);           //se muestra por medio del punto y la variable
    printf("\n El nuevo valor de ingles es %i ",appVar1->ingles);   //se muestra por medio de la fleca (apuntador a estructura)
    printf("\n El nuevo valor de fisica es %i ",appVar1->fisica);

return 0;
}

    void modificar(struct calificaciones*a){        //funcion que tiene como parametro un apuntador a estructura por lo tanto puedo usarlo con su operador ->
        a->mate=5;
        a->ingles=5;
        a->fisica=5;
    }


//SE MODIFICAN LOS CAMPOS DE UNA ESTRUCTURA POR MEDIO DE UNA FUNCION YA QUE SE PASA LA ESTRUCTURA POR REFERENCIA
