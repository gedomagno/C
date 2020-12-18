/*Programa que usa una funcion la cual devuelve un apuntador, la funcion recibe el valor de una variable apuntada y lo modifica para despues regresarlo al main, con lo que se observa que el valor inicial del apuntador del main ha cambiado)*/

#include<stdio.h>

int*funcion(int x);	//funcion que regresa un apuntador a entero

int main(){

	int a=10;
	int*p_a;
	p_a=&a;
	printf("El valor de lo apuntado por p_a es %d\n",*p_a);

	p_a=funcion(a);	//llamo a la funcion que regresa un apuntador y lo que regresa se lo asigno a p_a que es un apuntador a entero.
	
	printf("El nuevo valor de *p_a es %d porque fue el apuntador que regreso la funcion\n",*p_a);

return 0;
}

int*funcion(int x){	//funcion que regresa un apuntador a entero
	int*p_x;
	p_x=&x;

	*p_x=100;
	printf("En la funcion el valor de lo apuntado por p_x es %d\n",*p_x);

return p_x;
}


