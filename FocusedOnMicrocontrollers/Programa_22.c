/*Programa que utiliza una mascara y una operacion and para forzar un el 3 bit de una secuencia de bits a cero*/

#include<stdio.h>

int main(){
	int secBits=22;	//se requieren 5 bits para representar al 22
	int mascara=27;	//con esta mascara aseguro que el tercer bit sea cero
					//Mascara en binario es 11011. 
					//recordar que X AND 0=0 y X AND 1=X
	int res=0;
	res=secBits&mascara;
	printf("COmo resultao de la mascara 27 y operacion and, el 3 bit es ahora un cero\n");
	printf("resultado=%d\n", res);

	return 0;
}