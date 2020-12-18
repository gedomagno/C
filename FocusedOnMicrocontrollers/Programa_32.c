/*Programa que obliga al 6 bit de una secBits a ser 1. Se utiliza una mascara OR y despues una AND para comprobar que efectivamente el 6 bit es 1*/

#include<stdio.h>

int main(){
	char secBits=83;//e sexto bit de este numero es 0
	char mascara=32;//en binario es 00100000
	char resultado=0;
	resultado=secBits|mascara;	//obligamos a que sea 1 quinto bit pero no modificamos los otros bits
	printf("Se ha obligado al 6 bit de secBits a ser 1, ahora viene la comprobacion\n");
	/*Comprobando que el 6 bit es 1. Utilizamos para ello una mascara AND*/
	char mascara2=32;	//en binario es 100000
	char resComprobado=0;	//aqui guardare la comprobacion unicamente
	resComprobado=resultado&mascara2;
	if(resComprobado==0)
	{
		printf("El sexto bit de resultado es 0\n");
	}else if(resComprobado==32)
	{
		printf("El sexto bit de resultado es 1\n");
	}
	printf("EL valor de resulatdo es  %d, se comprueba ademas que solo modifique ese bit y no los otros\n", resultado);

return 0;
}
