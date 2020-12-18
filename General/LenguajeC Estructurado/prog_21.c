// determina el promedio del numero de alumnos deseado
#include<stdio.h>

main () {
     int n,i,j;
     printf("Dame el numero de alumnos a registrar"); 
     scanf("%i",&n);
     int arreglo[n][3];
     float promedio[n];
    
     for(i=0;i<n;i++){
         printf("\n Dame las calificaciones del alumno %i:", (i+1));                      
         for(j=0;j<3;j++){
             printf("\nCalificacion %i:",j+1);             
             scanf("%i",&arreglo[i][j]);
                          }
                      }
     for(i=0;i<n;i++){
         promedio[i]=0.0;
         for(j=0;j<3;j++)
             promedio[i]+=(float)arreglo[i][j]/3;             
                     }                    
    
      for(i=0;i<n;i++){
          printf("Las calificaciones del alumno %i son:",(i+1));             
          for(j=0;j<3;j++)
              printf("%i",arreglo[i][j]);
          printf("\nEl promedio es %.2f\n\n",promedio[i]);    
                       }                   
        getch();              
     }
