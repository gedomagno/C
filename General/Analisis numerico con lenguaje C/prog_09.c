//Programa que imprime la suma de numeros naturales de acuerdo al gusto del usuario. Uso del acumulador
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (void){
    
    int c,n,as=0;  //n representa el numero de veces que se desea imprimir
    system("cls");// comando para limpiar la pantalla
    printf("\n\t Cuantos valores desea desplegar ");
    scanf("%d",&n);
    c=0;
    while (c<n) // al while no se le pone ; porque sino entra a un ciclo infinito
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
          as =as+c; //acumulador
    }
          printf("\n\n suma = %d",as);
          printf("\n\n\t");
          system("pause");
          return(0);
    }
