//programa donde definimos una funcion que suma dos numeros
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int suma(int C, int D)

{
    int E;
    E=C+D;
    return (E);
}
int main (void)
{
    
    int A, B;
    printf("\n\t Dame A,B :");
    scanf("%d, %d", &A,&B);
    printf("\n\t A=%d, B=%d, A+B=%d ",A,B,suma(A,B));
    printf("\n\n");
    system("pause");
    return 0;
    
}

