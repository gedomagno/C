/*Programa que muestra el efecto de recorrer bits a la izquierda.
 * POR CADA POSICION RECORRIDA A LA IZQUIERDA SE OBTIENE secBits multiplicado por dos*/

#include<stdio.h>

int main(){
	char secBits1=2;
	char secBits2=7;	

	secBits1=secBits1<<1;	
	secBits2=secBits2<<4;

	printf("\n cuando recorremos un bit a la izquierda es lo mismo que multiplicar dicho numero por dos\n");

	printf("secBits1=%d\n", secBits1);
	printf("secBits2=%d\n", secBits2);



return 0;
}
