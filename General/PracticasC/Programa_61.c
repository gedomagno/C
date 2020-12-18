/*Programa que utiliza un apuntador a una estructura para introducir y desplegar datos de la misma por medio del operador ->*/

#include<stdio.h>

    struct estructura_amigo{
        char nombre[15];
        char apellido[15];
        int telefono;
        int edad;
    };

    struct estructura_amigo amigo;

int main(){
        struct estructura_amigo * p_amigo=&amigo;  //declaro y anclo un apuntador (p_amigo) a la estructura amigo

        printf("Introduzca el nombre del amigo ");  //ingreso los datos a la estructura por medio del apuntador p_amigo
        scanf("%s", &p_amigo->nombre);
        printf("Introduzca el apellido del amigo ");
        scanf("%s", &p_amigo->apellido);
        printf("Introduzca el telefono del amigo ");
        scanf("%i", &p_amigo->telefono);
        printf("Introduzca la edad del amigo");
        scanf("%i", &p_amigo->edad);

        printf("Nombre:%s", p_amigo->nombre);       //imprimo los campos de la estructura por medio del apuntador p_amigo
        printf("\n Apellido:%s ", p_amigo->apellido);
        printf("\n Telefono:%i", p_amigo->telefono);
        printf("\n Edad:%i", p_amigo->edad);

return 0;
}
