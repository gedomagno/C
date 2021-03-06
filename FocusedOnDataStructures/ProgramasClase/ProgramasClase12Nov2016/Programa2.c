#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 10

void introduce_valores(int a[]);
void muestra_valores(int *a);

int main()
{
    int a[MAX];
    introduce_valores(a);
    muestra_valores(a);
    return 0;
}

void introduce_valores(int a[])
{
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("\nIntroduce el valor a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}

void muestra_valores(int *a)
{
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("\nValor de a[%d]: %d",i,a[i]);  //podemos mostrar la info mediante el mismo arreglo
    }
    for(i=0;i<MAX;i++)
    {
        printf("\nValor de a[%d]: %d",i,*(a+i));    //atraves del apuntador
    }
}
