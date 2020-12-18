/*Programa de busqueda lineal. Se busca un numero dentro de un arreglo y se devuelve dicho valor y la posicion*/

#include<stdio.h>
#define tam 5;

int main(){
    int arreglo[tam]={1,2,3,4,5};
    int i=0;
    int indice=0;
    int aux=0;

    printf("ingrese el valor a buscar: ");
    scanf("%d",&aux);

    for(i=0;i<tam;i++){
        if(aux==arreglo[i]){
            printf("Se encontro el valor %d\n en el indice %d",arreglo[i],i);
            //indice=i;
            //printf();
            break;
    }

    }

return 0;
}
