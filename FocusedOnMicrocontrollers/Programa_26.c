/*Programa que ejecuta una mascara con XOR para complementar el bit 1 y 5 de una secuencia de 8 bits*/
//RECORDAR QUE X XOR 0=X y X XOR 1=~X

#include<stdio.h>

int main(){
	int secBits=111;	//xxxxxxxx
	int mascara=17;		//00010001	con esta mascara aseguro que obtengo el complemento del bit 1 y 5
	int res=0;

	res=secBits^mascara;

	printf("secBits^mascara=%d\n", res);

	//haciendo las operaciones correspondientes se puede observar que si se cumple lo deseado, 
	//se complementan los bit 1 y 5 y los otros bits se quedan sin modificacion alguna

	return 0;
}