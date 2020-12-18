#include<stdio.h> //uso de funciones

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion (int a, int b);
float division(float a, float b);

main(){
       
       int w,x,y;
       printf("Eliga una opcion \n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division \n\n\t");
       scanf("%i", &w); 
       printf("Introduzca el primer valor");
       scanf("%i", &x);
       printf("Introduzca el segundo valor");
       scanf("%i", &y);
       
       switch (w){
          case(1):
          printf("El resulatdo es %i", suma(x,y));
          break;
          case(2):
          printf("El resulatdo es %i", resta(x,y));
          break;
          case(3):
          printf("El resulatdo es %i", multiplicacion(x,y));
          break;
          case(4):
          printf("El resulatdo es %f", division(x,y));
          break;
                 }
      getch();

       }

       int suma(int a, int b)       
           int resultado;
           resultado= a +b;
           return resultado;
                      }
                      
       int resta(int a, int b){
           int resultado;
           resultado= a - b;
           return resultado;
                      }

       int multiplicacion(int a, int b){
           int resultado;
           resultado= a*b;
           return resultado;
                      }

       float division(float a, float b){
           float resultado;
           resultado= a/b;
           return resultado;
                      }
                      
                      
                      
