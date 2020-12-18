/*Programa que muwstra el resultado de X AND 0=0 y X AND 1=X*/

#include<stdio.h>

int main(){
	int X=0x0;
	int res=0x0;

	printf("------Si X=0------\n");
	printf("X AND 0=%x\n", X & 0);
	printf("------Si X=1-----\n");
	X=0x1;
	printf("X AND 0=%x\n", X & 0);
	printf("CONCLUSION: X AND 0 =0 ---- SIEMPRE\n\n\n");

	printf("-----Si X=0------\n");
	X=0x0;
	printf("X AND 1=%x\n", X & 1);
	printf("-----Si X=1-----\n");
	X=0x1;
	printf("X AND 1=X\n", X & 1);
	printf("CONCLUSION: X AND 1=X----SIEMPRE\n\n\n");
	return 0;
}