/*Programa que pregunta el numero de renglones y columnas del arreglo,
pide los valores y los imprime*/

int main(){
    int renglon=0;
    int columna=0;
    int i=0;
    int j=0;

    printf("Especifique el numero de renglones del arreglo ");
    scanf("%d", &renglon);
    printf("Especifique el numero de columnas del arreglo ");
    scanf("%d", &columna);

    int arreglo[renglon][columna];

    for(i=0;i<renglon;i++){     //for que pide los elementos del arreglo
        for(j=0;j<columna;j++){
            printf("Introduzca el elemento, renglon %d, columna %d ", i, j);
            scanf("%d", &arreglo[i][j]);
        }
    }

    printf("\n Los elementos del arreglo son");

    for(i=0;i<renglon;i++){   //for para imprimir los elementos del arreglo
        for(j=0;j<columna;j++){
                printf("\n renglon %d, columa %d : %d", i,j, arreglo[i][j]);
        }
    }
return 0;
}
