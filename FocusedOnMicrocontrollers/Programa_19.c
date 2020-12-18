/*Programa que muestra que siempre XXOR0=X e XXOR1=~X*/

#include<stdio.h>

int main(){
	int X=0x0;
	int res=0;

	printf("Si X=0 => X XOR 0=%d\n", X^0);
	X=0x1;
	printf("Si X=1 => X XOR 0=%d\n", X^0);
	X=0x0;
	printf("Si X=0 => X XOR 1=%d\n", X^1);
	X=0x1;
	printf("Si X=1 => X XOR 1=%d\n", X^1);

	printf("Conclusion X XOR 0 =X y X XOR 1=~X\n");

	return 0;
}