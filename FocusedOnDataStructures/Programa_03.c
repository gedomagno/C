#include<stdio.h>

char*obtenMensaje(char opcion){
    static char mensaje1[]="Hola Mundo";
    static char mensaje2[]="Que es esto";

    if(opcion==1)
        return mensaje1;
    return mensaje2;
        }

void muestraMensaje(char*mensaje){
    printf("\n%s\n",mensaje);
}

void main(){

    void imprime(char opcion){
        printf("Esto es una funcion anidada");
        muestraMensaje(obtenMensaje(opcion));
    }

    imprime(1);
    imprime(2);
    imprime(3);

}
