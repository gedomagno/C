/*Arreglo de apuntadores y apuntador a arreglo*/

#include<stdio.h>

int main(){
    int arreglo[5]={1,2,3,4,5};
    int i=0;
    int var1=1;
    int var2=2;
    int var3=3;
    int var4=4;
    int var5=5;

    for(i=0;i<5;i++){
        printf("\n El elemento %i tiene la direccion %p",i,&arreglo[i]);    //cada 4 bytes se almacena un elemento del arreglo
    }

    int*apArreglo=&arreglo;       //apuntador a mi arreglo

    printf("\n La direccion a la cual apunta apA es %p, la cual es la misma que la del primer elemento del arreglo ",apArreglo);

    printf("\n La direccion de la variable var1 es %p", &var1);
    printf("\n La direccion de la variable var2 es %p", &var2);
    printf("\n La direccion de la variable var3 es %p", &var3);
    printf("\n La direccion de la variable var4 es %p", &var4);
    printf("\n La direccion de la variable var5 es %p\n", &var5);

    int*ap[5];      //arreglo de apuntadores
    ap[1]=&var1;
    ap[2]=&var2;
    ap[3]=&var3;
    ap[4]=&var4;
    ap[5]=&var5;

    for(i=1;i<6;i++){
        printf("\n La direccion contenida en el elemento ap[%i] es %p, ",i,ap[i]);
    }

return 0;
}
