/*Programa que muestra el efecto de recorrer una secuencia de bits a la derecha. POR CADA BIT QUE SE RECORRA A LA DERECHA SE DEBE DIVIDIR EL NUMERO DE INTERES ENTRE DOS*/

#include<stdio.h>

int main(){
	char secBits1=7;	  //0000 0111
	char secBits2=106;	//0110 1010

	secBits1=secBits1>>1;	//hago un corrimiento a la derecha de dos bits
	secBits2=secBits2>>5;	//hago un corrimiento de bits de 5 espacios a la derecha

	printf("Despues de recorrer secBits1 (valor original 7) a la derecha 2 espacios se tiene %d\n", secBits1);
	printf("Despues de recorrer secBits2 (valor original 106) a la derecha 5 espacios se tene %d\n", secBits2);
	

return 0;
}
