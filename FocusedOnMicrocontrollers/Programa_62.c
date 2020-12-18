/*Programa que muestra el uso de malloc*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int var1=10;
	int *app_1=NULL;

	app_1=(int*)malloc(sizeof(int));

	printf("la direccion de memoria reservada por malloc es %x\n", app_1);
	printf("Direccion del app_1 es %x\n", &app_1);
	printf("El contenido de la direccion de memoria reservada por malloc es %x\n", *app_1);
	printf("El contenido de la direccion de memoria reservada por malloc se puede observar asi %x\n", *((int*)malloc(sizeof(int))));




	return 0;
}