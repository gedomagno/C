#include<stdio.h>
#include<stdlib.h>

int suma(int *pnt, int n);
int resta(int *pnt, int n);
int division(int *pnt, int n);
int multiplicacion(int *pnt, int n);

 main(){
       int *pnt;
       int opcion, n, i;
       
       printf("\n Seleccione una opcion:\n1.Suma \n2.Resta \n3.Multiplicacion \n4.Division\n");
       scanf("%i",&opcion); 
       printf("Dame el numero de datos");
       scanf("%i", &n);
       pnt=(int*)malloc(sizeof(int)*n); // reserva en memoria los espacios indicados 

       for(i=0; i<n; i++){
             printf("Dame el numero %i", i+1);
             scanf("%i",(pnt+i));
             }

       switch (opcion){
              case 1: 
              printf("La suma de a y b es: %i",suma(pnt,n));
              break;
              case 2: 
              printf("La resta de a y b es: %i",resta(pnt,n));
              break;
              case 3:
              printf("La multiplicacion de a y b es: %i",multiplicacion(pnt,n));
              break;
              case 4:
              printf("La division de a y b es: %i", division(pnt,n));
              break;
              }
       getch();
       
       }

          int suma(int *pnt, int n){
              int resultado=0, j;
              printf("\n Tus nuneros fueron: ");
              for(j=0; j<n; j++){
                  resultado +=*(j+pnt);
                  printf("%i ",*(pnt+j));
                 }
              return (resultado);
              }
              
          int resta(int *pnt, int n){
              int resultado=0, j;
              printf("\n Tus nuneros fueron: ");
              for(j=0; j<n; j++){
                  if(j==0)
                  resultado =*(j+pnt);     
                  else 
                  resultado -=*(j+pnt);

              printf("%i ",*(pnt+j));
                 }
              return (resultado);
              }

          int multiplicacion(int *pnt, int n){
              int resultado=0, j;
              printf("\n Tus nuneros fueron: ");
              for(j=0; j<n; j++){
                  resultado *=*(j+pnt);
                  printf("%i ",*(pnt+j));
                 }
              return (resultado);
              }

          int division(int *pnt, int n){
              int resultado=0, j;
              printf("\n Tus nuneros fueron: ");
              for(j=0; j<n; j++){
                  resultado /=*(j+pnt);
                  printf("%i ",*(pnt+j));
                 }
              return (resultado); 
              }







