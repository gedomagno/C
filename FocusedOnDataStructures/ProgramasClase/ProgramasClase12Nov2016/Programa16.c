#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **apuntador;
    int **auxiliar;
    int n,m,i,j;
    do
    {
        printf("\nCuantas filas tiene tu matriz? ");
        scanf("%d",&n);
    }while(n<1);
    apuntador=(int**)malloc(n*sizeof(int*));
    auxiliar=apuntador;
    do
    {
        printf("\nCuantas columnas tiene tu matriz? ");
        scanf("%d",&m);
    }while(m<1);

    for(i=0;i<n;i++)
    {
        apuntador[i]=(int*)malloc(m*sizeof(int));
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
        for(j=0;j<m;j++)
        {
            printf("%d ",apuntador[i][j]);
        }
        printf("\n");
    }
    free(apuntador);
    return 0;
}
