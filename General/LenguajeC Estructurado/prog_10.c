#include<stdio.h> //llamada de una funcion dentro de la misma funcion 

void sucesiones(int a, int b);

main() {
       int a,b;
       printf("Dame el primer numero");
       scanf("%i",&a);
       printf("Daqme el seundo numero");
       scanf("%i", &b);
       
       if(a<b)
          sucesiones (a,b);
       else
          printf("Error en los datos de entrada");
       getch();      
       }
       
       void sucesiones (int a, int b){
            if (a<b){
               printf("%i", a);
               sucesiones (++a,b);
                    }
          }
