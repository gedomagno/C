/*Programa con llamada de una funcion dentro de la misma funcion, para ello se requiere poner un "freno" de otro modo se genera un ciclo infinito */

#include<stdio.h>

void suma(int, int);

int main(){
    int a=0;
    int b=0;
    suma(a,b);
return 0;
}

void suma(int a, int b){  //funcion que se llama a si misma, pero con parametros modificados y un "freno" de por medio
    printf("\n %i", a+b);
    a++;
    b++;
    if(a<5){
        suma(a,b);
    }else{
        return;
    }

}
