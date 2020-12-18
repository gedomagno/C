#include<stdio.h>
#include<string.h>

struct Persona{
    char nombre[80];
    char sexo;
    int edad;
};

int main(){
    struct Persona p;

    strcpy(p.nombre, "Gerardo Maldonado");
    p.edad=20;
    p.sexo='H';

    printf("Nombre: %s\n", p.nombre);
    printf("edad: %d\n", p.edad);
    printf("sexo: %c\n", p.sexo);

return 0;
}
