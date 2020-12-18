//programa que calcula una integral numerica por el metodo del trapecio
//por medio de la formula h/2(y0+yn +2(sumatoria(yi)con i =1 hasta i=n-1))
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define TAM 16 //cte simbolica, representa un arreglo que puede cambiar de tamaño

int main (void)
{
    double x[TAM], y[TAM], temp, suma, h, integral,li, ls;
    int factor[TAM], i, areas;
    do
    {
      system("cls");
      printf("\n LIMITE INFERIOR ");                
      scanf("%lf",&li);
      printf("\n LIMITE SUPERIOR ");                
      scanf("%lf",&ls);
      printf("\n NUMERO DE AREAS ");                
      scanf("%d",&areas);
    } while (areas<=2|| areas> TAM-1||li>ls); // dos lineas paralelas implican or a nivel de cantidad
                                              // una sola linea implica or a nivel de bit
    h=(ls-li)/areas;
    i=0;
    while(i<=areas)
       {
        x[i]=li+i*h;
        y[i]=cos(x[i]); 
        printf("\n\t x[%d]=%lf \t y[%d] = %lf ",i,x[i],i,y[i]);
        i++;
       } // hasta aqui solo imprime la tabla de x y y
       
    factor[0]=1;
    factor[areas]=1;
    i=1;
    while(i<areas)
       {
         factor[i]=2;
         i++;         
       }          
    suma=0.0;
    i=0;
    while(i<=areas)
    {
     suma =suma+ y[i]*factor[i];
     i++;
    }
    
    integral=suma*(h/2);
    printf("\n  INTEGRAL= %lf",integral);
    printf("\n\n");
    system("pause");
    return 0;
    
}

