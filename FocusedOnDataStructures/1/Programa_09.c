/*Programa que repasa el uso de apuntadores basicos*/

#include<stdio.h>

int main(){
	
	int a=10;
	int*appA;

	appA=&a;	//asignamos la direccion de "a" al apuntador "appA"
	printf("El valor de a es %i y su direccion en memoria es %p\n", a, &a);
	printf("El valor de appA es %p y su direccion es %p\n", appA, &appA);
	

return 0;
}
