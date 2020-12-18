/*Programa que muestra como extraer algunos bits de una secuencia de bits, para ello se utiliza una mascara AND 
 * REcordad que X AND 0=0 y X AND 1=X
 * En este caso exatraere los primeros 3 bist de la secuencia de bits*/

#include<stdio.h>

int main(){
	char secBits=126;
	char mask=7; //0000 0111 con este valor obtengo que los primeros tres bits se mantengan y los otros sean cero
	char res=0;
	res=secBits	& mask;
	printf("El resulatdo es %d y en hexadecimal es %X\n", res, res);

	//con ello se nota que resulatdo solo dejo los tres primeros bits y los otros fueron puestos a cero


return 0;
}
