#include<stdio.h> //programa que da el promedio de 3 calificaciones
// es muy importante incializar variables
main()
{
      int n,i,j;
      printf("Dame el numero de alumnos\t");
      scanf("%i",&n);
      
      float arreglo[n][3];
      float resultado;
      
      for(i=0; i<n; i++) // for para llenar el arreglo
      {
          for(j=0;j<3;j++)
          {   
		   printf("Dame la calificacion %i del alumno %i\t",j+1,i+1);
           scanf("%f",&arreglo[i][j]);
          }     
      }

      for(i=0; i<n; i++) // for para desplegar el arreglo
         {
          printf("Las calificaciones del alumno %i son :\n",i+1);
          for(j=0;j<3;j++)
             printf(" %.1f \n",arreglo[i][j]);
         }

	  for(i=0;i<n;i++)	// for para sacar el promedio de las calificaciones
	  {
		printf("El promedio del alumno %i es: \n", i+1);
        resultado=0.0; // tuve que inicializar aqui porque solo asi salia
    	for(j=0;j<3;j++)
     	{
		    resultado=(resultado+(float)arreglo[i][j])/3; //¿por que debo solo dividir el arreglo 
	    }
			printf("%.2f\n",resultado);
     }
 
      getch();
      
       }
