#include<stdio.h> // calculo de area y perimetro de un cuadrado

int area(int lado);
int perimetro(int lado);

main() {
       int lado;
       printf("Dame el lado del cuadrado \n\t");
       scanf("%i", &lado);
       printf("\n\t El area del cuadrado es %i",area(lado));
       printf("\n\t El perimetro del cuadrado es %i",perimetro(lado));
       getch();

       }
       
       int area (int lado){
           return(lado*lado);
           }
           
       int perimetro (int lado){
           return(lado*4);
           }
           
