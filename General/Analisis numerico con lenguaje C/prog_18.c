//programa que maneja el concepto de arreglos
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void)
{
    int i; // variable que representa indice del arreglo E[]
    char E[5]; // el arreglo tiene dimension de cinco(numero de elementos)
    i=1;
    E[i]='A'; // en el segundo espacio se esta guardando A 
    printf("\n\t %c",E[i]);
    i++;
    E[i]='l';
    printf("\n\t %c",E[i]);
    i++;
    E[i]='n';
    printf("\n\t %c", E[i]);
    i++;
    E[i]='k';
    printf("\n\t %c",E[i]);
    i=0;
    E[i]=E[3];
    printf("\n\t %c",E[i]);
    
    
    printf("\n\n");
    system("pause");
    return 0;
    
}

