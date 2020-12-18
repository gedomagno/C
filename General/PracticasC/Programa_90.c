/*Paso por valor de una estructura a una funcion*/

#include<stdio.h>

struct notas{           //estructura global
    int fisica;
    int matematicas;
    int ingles;
};

void llenado(struct notas);  //prototipo de funciones que requiere para trabajar una variable del tipo struct notas
void mostrar(struct notas);

int main(){
    struct notas var1;          //variable del tipo struct notas ¡¡¡LOCAL!!!
    llenado(var1);              //llamado a la funcion "llenado", se le manda la variable var1
    mostrar(var1);              //llamado a la funcion "mostrar", se le manda la variable var1
return 0;
}

void llenado(struct notas a){                    //declaracion de la funcion llenado la cual necesita una variable del tipo struct notas.
    printf("\n Ingrese la cal de fisica ");         //la variable que le paso a la funcion es una copia de var1(paso por valor)
    scanf("%i",&a.fisica);
    printf("\n Introduzca la cal de mate ");
    scanf("%i",&a.matematicas);
    printf("\n Introduzca la cal de ingles ");
    scanf("%i",&a.ingles);
}

void mostrar(struct notas b){                                    //declaracion de la funcion mostrar que requiere de una variable
    printf("\n La calificacion de fisica es %i", b.fisica);     // del tipo struct notas para trabajar. Le paso una copia de var1(paso por valor)
    printf("\n La calificacion de mate es %i", b.matematicas);
    printf("\n La calificacion de ingles es %i", b.ingles);
}

//debido a que paso solo copias de una varibale(var1) los cambios hechos en las funciones llenado y mostrar no se ven reflejados en la variable var1 del main
//Por lo anterior los valores impresos por mostrar no coinciden con los ingresados en llenado
