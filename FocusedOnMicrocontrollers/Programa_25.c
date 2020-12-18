/*Programa que utiliza una mascara OR para obligar al quinto bit de una secuencia de 8 bits, a ser 1 */

#include<stdio.h>

int main(){
	int secBits=76;	//primera secuencia de bits
	int mascara=16; //con esta mascara aseguro que el quinto bit sea 1-> 00010000

	int res=0;

	res=secBits| mascara;

	printf("secBits|mascara=%d\n", res);

	//haciendo las operaciones correspondientes y recordadno que
	//X OR 0=X y X OR 1=1 se observa que si se cumple lo esperado

	return 0;
}