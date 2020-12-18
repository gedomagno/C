/*Paso por referencia, se incrementa una variable (del main) 5 veces por medio de una funcion*/

#include<stdio.h>

int incrementar(int*);

int main(){
    int var1=0;
    int res=0;

    res=incrementar(&var1);
    printf("\n la variable vale %i",res);

return 0;
}

int incrementar(int*a){     //paso por referencia
    *a+=5;
    return *a;
}
