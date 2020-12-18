#include<conio.h>
#include<stdio.h>
#include <stdlib.h>

int main (void)
{
   int a,b;
   
    printf("\n\t Dame A = ");
    scanf("%d", &a);
    printf("\n\n\t A = %d", a);

    printf("\n\n\t Dame B = ");
    scanf("%d", &b);
    printf("\n\n\t B = %d", b);

    printf("\n\n\t %d + %d = %d",a,b, a+b);
    printf("\n\n\t %d - %d = %d",a,b, a-b);
    printf("\n\n\t %d * %d = %d",a,b, a*b);
    printf("\n\n\t %d / %d = %d",a,b, a/b);
    printf("\n\n\t %d modulo %d = %d",a,b, a%b);


    printf("\n\n");
    system("pause"); //genera una pausa 
    
    }
