/*Programa que determina si el quinto bit de una secuenia de bits es 0 o 1
 se utiliza una mascara AND*/

#include<stdio.h>

int main(){
	char secBits=83;	//83 en binario es
	char mascara=16;	//16 en binario es 10000
	char resultado=0;
	resultado=secBits & mascara;
	if(resultado==0)
	{
		printf("el quinto bit de la secBits es 0\n");
	}else if(resultado==16)
	{
	
		printf("el quinto elemento de la secBits es 1\n");
	}




return 0;
}
