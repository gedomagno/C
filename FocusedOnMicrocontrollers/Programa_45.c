/*Programa que determina si el 4 y 5 bit de una secuencia de bits es cero o uno, se utiliza una sola mascara OR
 * Recordar que X OR 0=0 =>X=0
 * 							X OR 0=1 =>X=1
 * 							*/

#include<stdio.h>

int main(){
	char secBits=7;
	unsigned char mask=231;	//0x=1110 0111 con esta mascara pregunto sobre el 4 y 5 bit
	unsigned char res=0;
	res=secBits	| mask;
	switch (res)
	{
					case 231:
				printf("El 4 y 5 bit son cero\n");
				break;
					case 239:
				printf("el 4 bit es uno y el 5 es cero\n");
				break;
					case 247:
				printf("El 4 bit es cero y el quinto es uno\n");
				break;	
					case 255:			
				printf("El 4 y 5 bit son uno\n");
				break;	
					default:	
				printf("NO se puede determinar\n");			
	};
	printf("EL valor de res es %d\n", res);


return 0;
}
