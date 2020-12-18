/*Programa que emula la obtencion del complemento a1 de un numero*/

#include<stdio.h>

int main(){
	int a=206;	//01011000
	int b=33;	//00100001
	
	printf("el complemento a1 de 88 es %x\n", ~a);	//39 ->10100111
	printf("el inverso de 33 es %d\n", ~b);	//31 ->11011110

return 0;
}
