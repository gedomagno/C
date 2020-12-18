/*llamada a funcion mediante su apuntador*/
#include<stdio.h>
#include<stdlib.h>

int funcion(int a);

int main()
{
    int a;
    int (*pf)(int);
    a=10;
    pf=funcion;
    printf("\n\nValor de pf= %p ",pf);
    printf("\nValor final de a= %d\n\n",pf(a));
    return 0;
}

int funcion(int a)
{
    a=400;
    return a;
}
