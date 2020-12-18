/*Programa que pregunta por el valor de dos bits de una secuencia de bits mediante una sola mascara AND. Se pregunta por el valor del 2 y 8 bit*/
/*Recordar que X AND 0=0 => X vale 0
							 X AND 1=1 => X vale 1*/

#include<stdio.h>

int main(){
	unsigned char secBits=128;	//utilizo unsigned para que el rango de valores representados sea desde 0 hasta 255 y no desde -127 hasta 127
	char mask=130;	//1000 0010. Con esta mascara estoy preguntando por dos bits de la secuencia de bits
	int res=0;
	res=secBits&mask;
	
	switch (res)
	{
					case 0:
				 printf("De secBits. El octavo y segundo bit son cero\n");
				 break;
					case 2:
				 printf("De secBits. El otavo bit es cero y el segundo uno\n");		
				 break;
					case 128:
				 printf("De secBits. El octavo bit es uno y el segundo cero\n");		
				 break;
					case 130:
 				 printf("De secBits. El octavo y segundo bit son uno\n");		
					default:
				 printf("No se puede determinar\n");		
	}
	
	printf("El resultado de secBits & mask=%d\n", res);




}
