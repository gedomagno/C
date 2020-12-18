/*Manejo de matriz, mediante apuntadores simples y dobles*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **apuntador;
    int **auxiliar;
    int n,m,i,j;
    int *columnas;
    do
    {
        printf("\nCuantas filas tiene tu matriz? ");
        scanf("%d",&n);
    }while(n<1);
    apuntador=(int**)malloc(n*sizeof(int*));
    columnas=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nCuantas columnas tiene la fila %d? ",i+1);
        scanf("%d",&m);
        columnas[i]=m;
        apuntador[i]=(int*)malloc(m*sizeof(int));
        auxiliar=apuntador;
        for(j=0;j<m;j++)
        {
            printf("\nElemento [%d][%d]: ",i+1,j+1);
            scanf("%d",&apuntador[i][j]);
        }
    }
    apuntador=auxiliar;
    printf("\n\nLos elementos de tu matriz son:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<columnas[i];j++)
        {
            printf("%d ",apuntador[i][j]);
        }
        printf("\n");
    }
    free(apuntador);
    return 0;
}
