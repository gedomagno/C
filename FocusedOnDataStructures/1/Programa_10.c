/*Programa que pasa un arreglo de caracteres a una funcion. La funcion solo imprime dicho arreglo en pantalla*/

#include<stdio.h>

void imprime(char Nombre[]);	//paso de un arreglo como parametro

int main(){

	char Nombre[15];
	printf("Ingrese un nombre: ");
	scanf("%s", Nombre);

	imprime(Nombre);	//llamo a la funcion y le paso un arreglo como parametro

return 0;
}

void imprime(char Nombre[]){
	printf("El nombre escrito fue %s\n", Nombre);

}
