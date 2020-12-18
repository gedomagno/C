/*Programa de repaso de apuntadores */
#include <stdio.h>

int main(){
	int a=11;	
	printf("La direcion de memoria de a es 0x%X\n", &a);	
	//declaro un apuntador que apunte a la direccion de memoria de la variable a
	int *app_1=&a;

	printf("La direccion de memoria donde el compilador estabelcio el apuntador fue 0x%X\n", &app_1);
	printf("El valor que guarda mi apuntador es 0x%X\n", app_1);
	printf("el contenido de la localidad de memoria apuntada por app_1 es %d\n", *app_1);

	return 0;
}