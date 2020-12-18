//Programa que imprime el resultado de una funcion algebraica
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main (void){
    
    int c,n=0;  //n representa el numero de veces que se desea imprimir
    float x,y,h, x0; // x0 es el valor inicial
    system("cls");// comando para limpiar la pantalla
    printf("\n\t Cuantos valores desea desplegar ");
    scanf("%d",&n);

    printf("\n\t Dame el valor de x0 =  ");
    scanf("%f",&x0);

    printf("\n\t Dame el valor del espaciamiento h =  ");
    scanf("%f",&h);

    c=-1;
    while (c<n) // al while no se le pone ; porque sino entra a un ciclo infinito
    {
          c=c+1;
          x= x0+c*h;
//          y= pow(x,2); // x elevada al cuadrado
          y= sin(x); // seno de x 
          printf("\n\n\t %f \t %f",x,y );

    }     
          printf("\n\n\t");
          system("pause");
          return(0);

             }
