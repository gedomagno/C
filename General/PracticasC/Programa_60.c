/*Programa que muestra la inicializacion de una estructura*/

#include<stdio.h>
    struct estructura_amigo{
        char nombre[15];
        char apellido[15];
        int telefono;
        int edad;
    };

    struct estructura_amigo amigo;  //declaracion de una variable de nombre amigo del tipo estructura_amigo

int main(){

        struct estructura_amigo amigo={  //inicializacion de la variable que he declararo, la cual es una estructura del tipo de dato estructura_amigo
            "Gerardo",
            "Maldonado",
            1234,
            32,
        };

        printf("\nNombre: %s", amigo.nombre);
        printf("\nApellido: %s", amigo.apellido);
        printf("\nTelefono: %i", amigo.telefono);
        printf("\nEdad: %i", amigo.edad);

return 0;
}
