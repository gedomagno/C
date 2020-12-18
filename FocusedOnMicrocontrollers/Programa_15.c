/*Programa que emula la operacion logica Negado bit a bit*/

#include<stdio.h>

int main(){
	int a0=0x0;	//la compu lo ve como 0x 0000 0000 = 4 bytes
	int a1=0x1;	//la compu lo ve como 0x 0000 0001 = 4 bytes, 32 bits	

	int res0=0;
	int res1=0;

	res0= ~ a0;
	res1= ~ a1;

	printf("El negado de %x=%x\n", a0, res0);	// ffff ffff
	printf("El negado de %x=%x\n", a1, res1);	// ffff fffe

	return 0;
}