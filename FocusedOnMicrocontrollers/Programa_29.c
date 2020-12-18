/*Programa que muestra el valor final de un numero entero cuando este se desplaza  un bit a la izquierda*/

#include<stdio.h>

int main(){
	char secBits=43;	//43 en binaro es 101011
	secBits=secBits<<1;
	printf("El valor despues de dezplazar 1 bit a la derecha es %d\n", secBits);
	

return 0;
}
