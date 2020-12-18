/*Programa que utiliza malloc y free*/

#include<stdio.h>

int main(){
    int bytes;
    char*apuntador;     //en este apuntador se guardara la direccion de inicio del bloque de memoria reservado

    printf("Especifique el numero de bytes a reservar ");
    scanf("%i", &bytes);

    apuntador=(char*)malloc(bytes);

    if(apuntador){          //aqui se esta verificandp que se haya reservado la memoria solicitada
        printf("Se ha reservadp %i bytes", bytes);
        printf("\n el bloque reservado comienza en la direccion %p ",apuntador);

    printf("\n AHORA LIBERAMOS EL SEGMENTO DE MEMORIA CON FREE");
    free(apuntador);
    }else
    printf("\n No se ha reservado la memoria solicitada");
return 0;
}
