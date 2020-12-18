//programa que despliega una tabla preguntando al usuario
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void)
{
    char RES;
    system("cls");
    RES ='S';
    
    while(RES=='S' || RES=='s')
    {
      printf("\n\n\n\t Bloque verdadero");             
      printf("\n\t Deseas continuar (S/N): ");      
      RES =getche (); // sirve para leer del teclado y mostrar lo que escribiste             
           }
           
      printf("\n\n\t");
      system("´pause");
      return(0);
}
