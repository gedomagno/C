/*Programa que determina si un bit de una secuencia de bits es cero o uno, se utiliza una mascara AND*. EN este ejemplo se pregunta sobre el 5 bit y sobre el bit 7*/

#include<stdio.h>

int main(){
	char secBits=63;	//
	//RECORDAR que X AND 1 =0 => X vale 0
	//RECORDAR que X AND 1 =1 => X vale 1
	char mask1=16;	//0001 0000	//mascara para preguntar sobre el quinto bit
	char res1=0;	//variable solo para guardar el valor de la oepracion
	res1=secBits & mask1;
	if(res1==0)	//preguntamos por el bit 5 
	{
		printf("el quinto bit de secBits es cero\n");
	}else
	{
		printf("el quinto bit de secBits es uno\n");
	}
	printf("el resultado de secBits & mask1 =%d\n", res1);

	char mask2=64; //con esta mascara pregunto sobre el 7 bit
	char res2=0;	//solo para guardar el valor de la operacion
	res2=secBits & mask2;

	if(res2==1)	//preguntamos sobre el 7 bit
	{
		printf("el septimo bit de secBits es uno\n");
	}else
	{
		printf("el septimo bit de secBits es cero\n");					
	}
	printf("EL resultado de secBits & mask2 = %d\n", res2);

return 0;
}
