#include<stdio.h> // suma de los elementos de un arreglo

main()
{
	int i,suma=0;
	int arreglo[3];
	
	for(i=0;i<3;i++)
	   {
	    printf("Dame el elemento %d del arreglo \n", i+1);
	    scanf("%d", &arreglo[i]);
       }
       
	for(i=0;i<3;i++)
	  {
	   printf("el elemento %d del arreglo es %d \n\n", i+1, arreglo[i]);
       suma=suma+arreglo[i];
	  }
	  
	printf("La suma de los elementos del arreglo es %d:",suma);   
	   
    getch();
       
}
