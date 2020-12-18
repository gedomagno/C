/*Programa que determina cuales bits de una secuencia de bits estan en cero y cuales estan en uno
 * Se utiliza una mascara AND*/
#include<stdio.h>

int main(){
	char secBits=54;
	char masc=1;		//esta mascara se ira recorriendo a lo largo de la sec de bits y preguntara si el bit es cero o uno
	char desp=1;
	char i=0;

	for(i=0;i<8;i++)
	{
		masc=desp<<i;
		printf("valor de mascara=%d\n", masc);
		if((secBits & masc)==masc)
		{
			printf("el bit %d de secBits es 1 \n", i+1);
		}else
		{
			printf("el bit %d de secBits es 0 \n", i+1);
		}
	
	}
	
		printf("Valor de secbits en hexadecimal es %X\n", secBits);


}

