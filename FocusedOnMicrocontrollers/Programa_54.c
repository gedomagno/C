/*Programa que muestra como utilizar una mascara AND para separar un numero de 8 bits en dos de 4 bits cada uno*/

#include<stdio.h>

int main(){
	char completo=111;
	char alto=completo>>4;	//aqui recorro 4 bits a la derecha y me deshago de la parte baja de completo y solo me quedan lops 4 bits mas significativos
 	char bajo=completo & 0x0F;	//0000 1111 recordar que X AND 0 =0 y X AND 1=X
	printf("Comprobacion: Completo=%X\n", completo);	
	printf("alto=%X\n", alto);
	printf("bajo=%X\n", bajo);
	printf("Valor de 0xF0 es %d\n", 0xF0);

return 0;
}
