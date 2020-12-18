/*Programa que comprueba que el nombre de un arreglo es un apuntador al primer elemento del arreglo*/

#include<stdio.h>

int main(){
	int arreglo[3]={3,5,9};
	int *appArreglo;

	printf("La localidad de memoria del primer elemento del arreglo es %p y su valor %d\n",&arreglo[0],arreglo[0]);

	printf("Ahora hago que el apunatdor apunte al arreglo\n");
	
	appArreglo=arreglo;	//hago que el apuntador apunte al arreglo

	printf("El contenido del apuntador es %p y el valor de lo apuntado es %d\n",appArreglo,*appArreglo);

	printf("\nCon lo anterior se comprueba que el nombre de un arreglo es un apuntador a la localidad de memoria del primer elemento\n");

return 0;
}
