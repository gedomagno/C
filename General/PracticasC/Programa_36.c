/*Programa que imprime una cuenta ascendente o descendente con un ciclo for y limites dados por el usuario*/

#include<stdio.h>

int main(){
    int liminf=0;
    int limsup=0;
    int sel=0;
    int i=0;

    printf("\n Ingrese el limite inferior ");
    scanf("%i", &liminf);
    printf("\n Ingrese el limite superior ");
    scanf("%d", &limsup);
    printf("\n Oprima 1 para ascendente o 0 para descendente ");
    scanf("%i", &sel);

    if(sel==1){
    for(i=liminf; i<=limsup; i++){
            printf("%d ", i);
    }
    }else if(sel==0){
        for(i=limsup;i>=liminf;i--){
            printf("%d ",i);
        }
    }
return 0;}
