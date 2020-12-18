/*Programa que emula la operacion AND bit a bit*/

#include<stdio.h>

int main(){
	int a=10;	//representacion binaria 1010
	int b=22;	//representacion binaria 10110
	int res=0;
	res= a & b;
	printf("El resultado de a AND b=%d\n", res);// 01010 AND 10110=00010


return 0;
}

