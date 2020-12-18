/*Programa en el cual el usuario ingresa los elementos de un arreglo y los muestra en pantalla*/


#include<stdio.h>

int main(){
	int i=0;
	int arreglo[5];
	
	for(i=0;i<5;i++){
		printf("elemento[%d]: ",i);
		scanf("%d", &arreglo[i]);
	}

	printf("Elementos ingresados\n");

	for(i=0;i<5;i++){
		printf("Elemento[%d]: %d\n",i, arreglo[i]);
	}

return 0;
}
