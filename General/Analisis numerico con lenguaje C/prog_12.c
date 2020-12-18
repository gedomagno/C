//programa que despliega una tabla preguntando al usuario
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

int main (void)
{
    char RES;
    system("cls");
    RES ='S';
    
    while(RES=='S')
    {
      printf("\n\n\n\t Bloque verdadero");             
      printf("\n\t Deseas continuar (S/N): ");      
      RES =toupper(getche ()); // sirve para que el caracter leeido en el teclado lo convierta a mayusculas
    }
           
      printf("\n\n\t");
//      system("´pause");
      return(0);
}
