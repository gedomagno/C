/*Programa que utiliza una mascara y una operacion and para determinar si el 4 bit de una secuencia de bist es cero o uno*/

#include<stdio.h>

int main(){
	int secBits=24;	//se requieren 5 bits para representar a 19
	int mascara=8;	//01000, con esta mascara puedo determinar si el 4 bit es cero o uno
	int res=0;
	res=secBits&mascara;
	printf("res=%d\n", res);

	if(res==8)
		printf("el cuarto bit de 19 es 1");	
	else
		printf("el cuarto bit de 19 es 0");

	return 0;
}