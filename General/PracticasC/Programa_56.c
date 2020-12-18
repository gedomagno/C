/*Programa que utiliza la sentencia break para terminar un ciclo*/

#include<stdio.h>

int main(){
    int cont=0;

    while(cont<10){
        printf("\n %d", cont);
        cont++;

        if(cont==5){
            printf("\n El contador vale 5, se ejecuta la instruccion break y terminan las iteraciones ");
            break;                              //aunque break esta dentro del if, este termina el ciclo while ya que tiene el poder para terminar ciclos
        }

    }

return 0;
}
