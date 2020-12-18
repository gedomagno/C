//programa que maneja el concepto de arreglos y el termio getche el cual  limpia la memoria
// del teclado, lee un valor del teclado y automaticamente induce un enter
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void)
{
    int i; // variable que representa indice del arreglo E[]
    char E[5]; // el arreglo tiene dimension de cinco(numero de elementos)
    i=0;
    
    while(i<=4)
    {
      printf("\n\t E[%i]= ",i);                
//      fflush(stdin);  estas dos lineas son otra forma de utilizar el scanf
//      scanf("%c",&E[i]);
      E[i]=getche();
      i++;
               
    }

    i=0;
    
    while(i<=4)
    {
      printf("\n\n\t E[%i]= %c",i, E[i]);                
      i++;
    }    
    
    printf("\n\n");
    system("pause");
    return 0;
    
}

