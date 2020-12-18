/*Programa que emula la operacion XOR bit a bit*/

#include<stdio.h>

int main(){
	int a=83; //1010011
	int b=78;	//1001110
	int res=0;
	res=a ^ b;
	printf("a XOR b=%d\n", res);//el resulatdo es 29-> 0011101


return 0;
}
