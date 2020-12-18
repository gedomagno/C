/*Programa que muestra el uso de una mascara OR para determinar si un bit de una secuencia de bist es cero o uno. 
 Recordar que  X OR 0=0 => X=0
 							 X OR 0=1 => X=1	*/
/*Se pregunta por el 7 bit */
#include<stdio.h>

int main(){
	char secBits=32;
	unsigned char mask=191; //0x=0100 0000 Con esta mascara pregunto sobre el 7 bit
	unsigned char res=0;		//esta variable solo es para guardar el valor de la operacion
	res=secBits | mask;
	if(res==255) 	//con esta condicion, pregunto por el septimo bit
	{
		printf("el septimo bit de la secuencia de bits es 1\n");
	}else
	{
		printf("EL septimo bit de la secuencia de bits es 0\n");
	}				

	printf("El valor de res es %d\n", res);
return 0;
}
