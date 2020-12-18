/*Programa que emula la operacion or bit a bit*/

#include<stdio.h>

int main(){
	int a=47;	//en binario es 101111
	int b=33;	//en binario es 100001
	int res=0;

	res=a | b;
	printf("a OR b=%d\n", res);//el resultado es 47,-> 101111 lo cual es correcto
	

return 0;
}
