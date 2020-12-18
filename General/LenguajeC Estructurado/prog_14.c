// uso de funciones y apuntadores
#include<stdio.h>
#include<stdlib.h>

int suma(int *a, int *b);
int resta(int *a, int *b);
int division(int *a, int *b);
int multiplicacion(int *a, int *b);

 main(){
       int *a,*b;
       a=(int*)malloc(sizeof(int)); //para asegurar que la funcion malloc me regrese un puntero de tipo entero 
       b=(int*)malloc(sizeof(int)); //con malloc le digo al puntero donde iniciar el puntero
       int opcion, resultado;
       
       printf("\n Seleccione una opcion:\n1.Suma \n2.Resta \n3.Multiplicacion \n4.Division\n");
       scanf("%i",&opcion); 
       printf("Introduzca el primer valor");
       scanf("%i", a);
       printf("Introduzca el segundo valor");
       scanf("%i", b);
       
       switch (opcion){
              case 1: 
              printf("La suma de a y b es: %i",suma(a,b));
              break;
              case 2: 
              printf("La resta de a y b es: %i",resta(a,b));
              break;
              case 3:
              printf("La multiplicacion de a y b es: %i",multiplicacion(a,b));
              break;
              case 4:
              printf("La division de a y b es: %i", division(a,b));
              break;
              }
       getch();
       
       }

          int suma(int *a, int *b){
           return(*a)+(*b);
           }
           
          int resta (int *a, int *b){
           return(*a)-(*b);
           }

          int multiplicacion (int *a, int *b){
           return(*a)*(*b);
           }

          int division (int *a, int *b){
           return(*a)/(*b);
           }
           
           
           
           
           
