/*Programa que utiliza un arreglo como parametro de una funcion. La funcion recibe el parametro, suma los elementos del arreglo y envia su resultado al main donde éste es utilzado para calcular el promedio de los elementos del arreglo*/

#include<stdio.h>

int suma(int arreglo[]);	//funcion que recibe un arreglo como parametro

int main(){
	
	float promedio=0;
	int aux=0;
	int arreglo[5]={10,31,12,84,4};
	
	aux=suma(arreglo);

	printf("Lo que la funcion suma regresa al main es %i\n",aux);
	promedio=(float)aux/5;

	printf("El promedio del arreglo es %.2f\n",promedio);

return 0;
}

int suma(int arreglo[]){
	int var1=0;
	int i=0;
	
	printf("Lo que la funcion suma recibe de main es :\n");

	for(i=0;i<5;i++){
		printf("Elemento[%i]:%d\n",i,arreglo[i]);
		var1+=arreglo[i];	//con esto sumamos el contenido del arreglo
		}

return var1;
}
