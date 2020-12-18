/*Programa que pide los elementos de dos arreglos de 2X2 y en un tercero los suma*/

#include<stdio.h>

int main(){
    int arr1[2][2];
    int arr2[2][2];
    int res[2][2];
    int i=0;
    int j=0;

    printf("Primer arreglo \n");
    for(i=0;i<2;i++){   //llenado del primer arreglo
        for(j=0;j<2;j++){
            printf(" Ingrese, renglon %d, columna %d ", i,j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Segundo arreglo \n");
    for(i=0;i<2;i++){   //llenado del segundo arreglo
        for(j=0;j<2;j++){
            printf(" Ingrese, renglon %d, columna %d ", i,j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for(i=0;i<2;i++){   //impresion de los arreglos
        for(j=0;j<2;j++){
            printf(" \n renglon %d, columna %d: %d \t\t renglon %d, columna %d: %d ", i,j,arr1[i][j], i,j,arr2[i][j]);
        }
    }

    printf("\n");
    for(i=0;i<2;i++){   //suma de los arreglos
        for(j=0;j<2;j++){
            printf(" \n renglon %d, columna %d: %d ",i,j, arr1[i][j]+arr2[i][j]);
        }
    }


return 0;
}
