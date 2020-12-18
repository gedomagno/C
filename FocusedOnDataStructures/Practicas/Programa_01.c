/*Programa que hace uso del typedef 
typedef sirve para dar un sinonimo a un tipo de dato, por ejemplo
typedef int SINONIMO le da el nombre de SINONIMO al tipo de dato int*/

#include<stdio.h>

typedef int ENTERO;	//Al tipo int le doy el sinonimo de ENTERO

int main(){
	ENTERO a=5;	//declaro una variable a del tipo ENTERO, el cual es un 
			//sinonimo del int
	int b=15;
	
	printf("El valor de b es %d\n",b);
	printf("El valor de ENTERO es %d\n",a);

return 0;
}


