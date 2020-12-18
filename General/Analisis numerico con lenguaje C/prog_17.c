//programa que maneja el concepto de arreglos
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void)
{
    char E[5]; // el arreglo tiene dimension de cinco(numero de elementos)
    E[1]='A'; // en el segundo espacio se esta guardando A 
    printf("\n\t %c",E[1]);
    E[3]='l';
    printf("\n\t %c",E[3]);
    E[2]=E[3];
    printf("\n\t %c", E[2]);
    E[4]='G';
    printf("\n\t %c",E[4]);
    E[5]='R';
    printf("\n\t %c",E[5]);
    
    
    printf("\n\n");
    system("pause");
    return 0;
    
}

