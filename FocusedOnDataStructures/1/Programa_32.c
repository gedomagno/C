/*Programa que usa un apuntador doble*/

#include<stdio.h>

int main(){
	int a=10;
	int b=100;
	int*p_a;
	int*p_b;
	int**p_doble;
	p_a=&a;
	p_b=&b;
	p_doble=&p_a;	//puntero doble que guarda la direccion de un puntero (p_a)

	printf("a=%d,direccion=%p\n",a,&a);
	printf("b=%d,direccion=%p\n",b,&b);	
	printf("contenido de p_a=%p,dirde p_a=%p\n",p_a,&p_a);
	printf("contenido de p_b=%p,dirde p_b=%p\n",p_b,&p_b);
	printf("contenido de p_doble=%p, dirde p_doble=%p\n",p_doble,&p_doble);

	printf("\n");
	
	printf("*p_a=%d\n",*p_a);
	printf("*p_b=%d\n",*p_b);
	printf("*p_doble=%p\n",*p_doble);

	printf("**p_doble imprime el contenido de lo apuntado por otro apuntador %d\n",**p_doble);	//imprimo a mediante un apuntador doble. Se imprime e lvalor de a mediante un apuntador que guarda la direccion del apuntador que apunta a a.


return 0;
}
