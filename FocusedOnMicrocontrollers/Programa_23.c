/*Programa que utiliza una mascara and para el valor "extraer" conocer los ultimos 3 bits de una secuencia de bits*/

#include<stdio.h>

int main(){
	int secBits=67;	//para representar se necesitan 8 bits
	int mascara=7;	//con esta mascara obligo que los ultimos 3 bits de secBits se mantengan, recordar
					//que X AND 0=0 y X AND 1=X. La mascara en binario es 00000111
	int res=0;

	res=secBits&mascara;

	printf("res=%d\n", res);
	printf("el valor hexadecimal de res es 0x%x", res);
	printf("Se observa que los ultimos 3 bits son 011 lo cual en decimal es 3 que corresponde con el resulatdo");
	return 0;
}