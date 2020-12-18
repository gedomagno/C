/*Programa que muestra como obligar a ser cero el 5 bit de una secuencia de bits.Se utiliz una mascara AND*/

#include<stdio.h>

int main(){
	char secBits=83;//el quinto bit secBits es de numero es 1
	char mascara=239;//esta numero en binario es 11101111 y recordando que X AND 0=0 y X AND 1=X
	char resultado=0;
	resultado=secBits&mascara;
	/*Hasta ahora solo he obligado a que el bit sea cero, ahora me falta comprobar que si sea cero, para ello ocupo otra mascara AND*/	
	/*COMPROBACION*/
	char mascara2=16;//su representacion en binario es 10000
	char resComprobado=0;
	resComprobado=resultado&resComprobado;
	if(resComprobado==0)
	{
		printf("El qunito bit de secBits ha sido cambiado a cero\n");
	}else if(resComprobado==1)
	{
		printf("Error, el qunito bit no es cero\n");
	}

	printf("resulatdo=%d\n", resultado);
	/*El valor de resulatdo es 67 y eso implica que el quinto bit ha sido modificado a cero y los demas bits se han mantenido intactos*/
return 0;
}
