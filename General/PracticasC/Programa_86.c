/*Programa que mide el tamaño de una estructura, sin embargo sale mal la suma a pesar de
individualmente se respetan los tamaños en bytes*/

#include<stdio.h>

struct Persona{

    char nombre[30];    //30 bytes
    int edad;           //4 bytes
    char sexo;          // 1 byte
    float altura;       // 4 bytes
    float peso;         // 4 bytes
    char direccion[50]; // 50 bytes
};

int main(){
    struct Persona var1;    //var1 es del tipo struct Persona y ocupa 100 bytes en vez de 93 ¿por que?
    printf("\n La var1 ocupa %i bytes",sizeof(var1));


return 0;
}
