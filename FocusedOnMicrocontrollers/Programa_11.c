/*Programa que ejecuta las operaciones logicas AND, OR, XOR e INVERSOR (~) entre dos numeros*/

#include<stdio.h>

int main(){
	
	int a=103;	//su reprentacion binaria es 110 0111
	int b=23;	//representacion binaria es    1 0111
	int resAND=0;
	int resOR=0;
	int resXOR=0;
	int resINV=0;

	//-----------------AND-------------------//
	resAND=a & b;
	printf("El resultado de la operacion de a AND b=%d\n", resAND);	//resulatdo 7 en decimal, 111 en binario
	
	//-----------------OR-------------------//
	resOR=a | b;
	printf("El resultado de la operacion de a OR b =%d\n", resOR);

	//-----------------XOR-------------------//
	resXOR=a ^ b;
	printf("El resultado de la operacion de a XOR b =%d\n", resXOR);

	//----------------INVERSOR--------------//
	resINV= ~ a;
	printf("El resultado de invertir a es =%d\n", resINV);	//aqui el resulatdo binario es 1001 1000, se esta en A2 y para convertirlo a decimal se 
															//toma como negativo el bit mas significativo ¿solo cuando este sea 1? 



	return 0;
}