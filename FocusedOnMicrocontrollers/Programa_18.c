/*Programa que muestra la regla que XOR0=X y XOR1=1*/

#include<stdio.h>

int main(){
	int X=0x0;
	int res=0;

	printf("Si X=0 => XOR0=%d\n", X|0);
	X=0x1;
	printf("Si X=1 => XOR0=%d\n", X|0);
	X=0x0;
	printf("Si X=0 => XOR=%d\n", X|1);
	X=0x1;
	printf("Si X=1 => XOR=%d\n", X|1);

	printf("CONCLUSION XOR0=X y XOR1=1 SIEMPRE");
	return 0;
}