/*Programa que determina cuantos bits, en una secuencia de bits, estan en cero. Se utiliza una sola mascara la cual se desplaza hacia la derecha*/

#include<stdio.h>

int main(){
	char secBits=111;	//sec de bits que analizaremos para saber cuantos y cuales bits valen uno			
	char mascara=0;
	char desp=1;
	char i=0;

	for(i=0;i<8;i++)
	{
		mascara=desp<<i;	//aqui desplazo a la izquierda a la secuencia 0000 0001 para crear las mascaras necesarias
		printf("mascara=%d\n", mascara);
		if((secBits & mascara)==0)	//recordar que si X AND 1=0 => X=0 y X AND 1=1 => X=1
		{
			printf("EL bit analizado con la mascara %d es cero\n", mascara);	
		}else
		{
			printf("El bit analizado con la mascara %d es uno\n", mascara);
		}
		printf("\n");
	}
	





return 0;
}
