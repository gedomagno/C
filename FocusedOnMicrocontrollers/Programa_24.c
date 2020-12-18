/*Programa que "extrae" los bits 3,4,5 de una secuencia de 8 bits*/

#include<stdio.h>

int main(){
	int secBits=114;	//requiero de 8 bits para representar este numero
	int mascara=28; 	// la mascara en binario es 00011100 y con ella puedo extraer (conocer) el valor de los bits 3-5
	int res=0;
	res=secBits&mascara;

	printf("res=%d\n", res);
	printf("el valor es 16 lo cual en binario es 00010000, lo cual me dice que los bits 3-5 de la secuencia de bits es 100\n");
	printf("Comprobando se tiene que 114 en binario es 1110010, donde claramente se ve que los bits 3-5 son 100\n");
	return 0;
}