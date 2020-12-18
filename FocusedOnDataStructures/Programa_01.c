/*Programa que imprime mensajes usando macros*/

#include<stdio.h>
#define mensaje "primer programa"
#define funcion(argumentodefuncion) printf(argumentodefuncion); //macro que define una función
#define funcion2(argfun2) 2*argfun2;
#define saludo(argsaludo) printf("\nHola %s",argsaludo);    //macro que saluda lo que ingrese en saludo

int main(){
    int a=0;
    printf("Hola Mundo\n");
    printf("mensaje\n");
    funcion("Mensaje desde la funcion\n");    //argumento de funcion declarado en la macro
    a=funcion2(2);
    printf("El resultado es %d", a);
    saludo ("pepe");

return 0;
}
