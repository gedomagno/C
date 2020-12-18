/*Programa que usa una lista*/

#include<stdio.h>

//typedef int Entero      Acordeon de como usar el typedef

typedef struct elemento{
    int a;
    float b;
    struct Elemento* siguiente;

}dato;

int main(){
    dato x,y;
    x.a=8;
    x.b=3.14;
    x.siguiente=&y;

    printf("%d\n",x.a);
    printf("%f\n",x.b);
    printf("%p\n",x.siguiente);

return 0;
}
