/*Programa que emula la operacion XOR bit a bit*/

#include<stdio.h>

int main(){
	int a0=0x0;
	int a1=0x1;
	int b0=0x0;
	int b1=0x1;
	int res0=0;
	int res1=0;
	int res2=0;
	int res3=0;

	res0=a0 ^ b0;
	res1=a0 ^ b1;
	res2=a1 ^ b0;
	res3=a1 ^ b1;

	printf("%x ^ %x=%x\n", a0, b0, res0);
	printf("%x ^ %x=%x\n", a0, b1, res1);
	printf("%x ^ %x=%x\n", a1, b0, res2);
	printf("%x ^ %x=%x\n", a1, b1, res3);

	return 0;
}