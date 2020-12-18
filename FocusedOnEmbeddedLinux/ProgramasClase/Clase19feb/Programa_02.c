//no me salen los printf porque el error ocurre antes que el buffer se vacie
#include<stdio.h>

void main() {
	int a=10;
	int b=5;
	int  c;
	c=a/b;
	printf("El resultado es: %d",c); fflush(stdout);
	b=0;	
	printf("Aqui"); fflush(stdout); 	//el fflush es para vaciar el buffer
	a=c/b;
	printf("Otro resultado: %d",a); fflush(stdout);
}
