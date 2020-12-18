/*Programa que genera una cuenta ascendente o descendente entre limites por medio de un do-while*/

#include<stdio.h>

int main(){
    int liminf=0;
    int limsup=0;
    int sel;

    printf("\n Introduzca el limite inferior ");
    scanf("%d", &liminf);
    printf("\n Introduzca el limite superior ");
    scanf("%d", &limsup);
    printf("\n Oprima 1 si desea cuenta ascendente 0 d si desea cuenta descendente ");
    scanf("%d", &sel);

    if(sel==1){
            do{
                printf("%i ",liminf);
                liminf++;
            }while(liminf<=limsup);

    }else if(sel==0){
        do{
        printf("%i ", limsup);
        limsup--;
    }while(limsup>=liminf);
    }
return 0;
}
