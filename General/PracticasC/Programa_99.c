/*Paso por referencia mediante apuntadores con distintas nombres de argumentos en las funciones*/

#include<stdio.h>

int incrementar(int*);

int main(){
    int a=10;
    int*appA=&a;
    incrementar(appA);       //le paso el NOMBRE del puntero
    printf("\n a=%i",a);

return 0;
}

int incrementar(int* x){
    *x=*x+10;       //con esta linea modifico a la variable a
}
