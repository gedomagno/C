/*Programa que muestra el uso de la sentencia continue*/

#include<stdio.h>

int main(){
    int i=0;

    for(i=0;i<10;i++){

        if(i==5){
            printf("\n i ha tomado el valor de 5 y se ha ejecutado la instruccion continue");
            continue;
        }
        printf("\n %d", i); //esta instruccion no se ejecuta cuando i vale 5 porla sentencia continue y empieza la siguiente iteracion (con i=6)
    }                       // apesar de que continue esta dentro del if, ignora todo lo que esta dentro del ciclo while


return 0;
}
