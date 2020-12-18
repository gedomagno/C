//Programa que imprime pantallas de 10 en 10
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (void){
    
    int c=0;
    
    system("cls");// comando para limpiar la pantalla
    
    while (c<40) // al while no se le pone ; porque sino entra a un ciclo infinito
    {
          c=c+1;

          if (c%10) // si el resultado es diferente de cero se considera como verdadero
          {
              printf("\n\t %d ",c);
          }
          else
          {
              printf("\n\t %d \n\t ",c);
              system("pause");
              system ("cls");
          }              
    }
          printf("\n\n\t");
          system("pause");
          return(0);
    }
