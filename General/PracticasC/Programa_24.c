/*Programa que imprime una cuenta ascendente o descendente de acuerdo al gusto del usuario, los limites son dados por el usuario */

#include<stdio.h>

int main(){
    int liminf=0;
    int limsup=0;
    int sel=0;

    printf("\n Ingrese el limite inferior ");
    scanf("%i", &liminf);

    printf("\n Ingrese el limite superior ");
    scanf("%i", &limsup);

    printf("\n Oprima 1 si desea cuenta ascendente o 0 si desea descendente ");
    scanf("%i", &sel);

    if(sel==1){
        while(liminf<limsup)
            {
            printf("%d,",liminf);
            liminf++;
        }
        }
    else{
            if(sel==0){
        while(limsup>liminf){
            printf("%d, ", limsup);
            limsup--;
        }
            }
    }

return 0;
}
