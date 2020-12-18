/*Programa que imprime solo los pares de una cuenta ascendente o descendente con limites dados por el usuario*/

#include<stdio.h>

int main(){
    int liminf=0;
    int limsup=0;
    int sel=0;

    printf("Introduzca el limite inferior ");
    scanf("%i", &liminf);
    printf("Introduzca el limite superior ");
    scanf("%i", &limsup);
    printf("Oprima 1 para ascendente y 0 para descendente ");
    scanf("%i", &sel);

    if(sel==1){
        while(liminf<limsup){
                if(liminf%2==0){
            printf("%i ",liminf);
                }
            liminf++;
        }

    }else { if(sel==0){
        while(limsup>liminf){
            if(limsup%2==0){
                printf("%d,",limsup);
            }
                limsup--;
        }

    }
    }
return 0;
}
