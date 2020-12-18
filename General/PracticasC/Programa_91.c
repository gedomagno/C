/*Paso por valor de una variable a dos funciones, se muestra que las variables solo viven en la funcion y que las moficicaciones
hechas en esas funciones no cambian el valor de la variable que se pasa*/

#include<stdio.h>

void llenar(int);       //prototipo de funciones que necesitan de un tipo entero
void mostrar(int);

int main(){
    int a=1;            //a=1
    llenar(a);
    mostrar(a);
return 0;
}

void llenar(int var1){          //le paso una copia de a a llenar,esta piensa que la modifica pero en realidad solo modifica su var local
    printf("\n Ingrese el valor de a ");
    scanf("%i",&var1);
}

void mostrar(int var2){         //le paso una copia de a, por lo que se muestra es ese valor.
    printf("\n El valor de a es %i",var2);

}
