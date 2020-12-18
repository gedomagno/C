/*Aritmetica de apuntadores*/

#include<stdio.h>

int main(){

	int a=10;
	int*appA;

	appA=&a;	//appA apunta a a

	printf("%d\n",sizeof(int));

	printf("\n");

	printf("Direccion de appA es %p\n",&appA);
	printf("Contenido de appA es %p\n",appA);
	printf("Direccion de a es %p\n",&a);
	printf("Valor de a es %d\n",a);
	printf("Valor de lo apuntado por appA es %d\n",*appA);

	appA++;	//incremento en 1 el apuntador por lo que me recorro 4 bytes (tamaño de un entero)

	printf("\nDespues de haber incrementado en 1 el apuntador\n");

	printf("Direccion de appA es %p\n",&appA);
	printf("Contenido de appA es %p\n",appA);
	printf("Direccion de a es %p\n",&a);
	printf("Valor de a es %d\n", a);
	printf("Valor de lo apuntado por appA es %d\n",*appA);

return 0;
}


