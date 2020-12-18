// imprime los elementos de un arreglo unidimensional
#include<stdio.h>

main(){
       int indice;
       int miarreglo[5]={1,3,5,0,2};
       for(indice=0; indice<5;indice++)
           printf("\n\tEl elemento %i del arreglo es: %i \n", indice, miarreglo[indice]);
           
       getch();    
       }
