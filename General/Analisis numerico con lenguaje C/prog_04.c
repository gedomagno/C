#include<conio.h>
#include<stdio.h>
#include <stdlib.h>

int main (void)
{
   int a,b;
   
    printf("\n\t Dame A, B (separados por coma) ");
    scanf("%d,%d", &a, &b);
    printf("\n\n\t A = %d, B=%d", a, b);

    printf("\n\n\t %d + %d = %d",a,b, a+b);
    printf("\n\n\t %d - %d = %d",a,b, a-b);
    printf("\n\n\t %d * %d = %d",a,b, a*b);
    printf("\n\n\t %d / %d = %d",a,b, a/b);
    printf("\n\n\t %d modulo %d = %d",a,b, a%b);


    printf("\n\n");
    system("pause"); //genera una pausa 
    
    }
