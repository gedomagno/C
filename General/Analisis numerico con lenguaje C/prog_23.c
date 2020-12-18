//programa donde definimos una funcion que calcula el factorial
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int factorial(int D)
{
    int C=1, fac=1;
    
    while(C<=D)
    {
       fac=fac*C;
       C++;               
    }
    return (fac);
}

int main (void)
{
    
    int K;
    printf("\n\t Introduzca K ");
    scanf("%d,",&K);
    printf("\n\t %d!, %d ", K,factorial(K));
    printf("\n\n");
    system("pause");
    return 0;
    
}

