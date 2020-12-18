// programa que genera un contador con 20 veces la palabra hola
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (void){
    
    int c=0;
    
    system("cls");// comando para limpiar la pantalla
    
    while (c<20) // al while no se le pone ; porque sino entra a un ciclo infinito
    {
          c=c+1;
          printf("\n\t %d HOLA", c);
          }
          printf("\n\n\t");
          system("pause");
          return(0);
    
    
    }
