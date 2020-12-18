/*Programa que muestra el uso de strlen y sizeof para medir una cadena*/
#include<stdio.h>
#include<string.h>

int main(){
	char nombre[]="Gorka";
	printf("Lo escrito es: %s\n", nombre);
	printf("El tamaño es %i\n",strlen(nombre)); 	//aqui me regresa la longitud de lo escrito sin considerar el fin de cadena
	printf("usando size of %d\n", sizeof(nombre));	//aqui regresa el numero de bytes considerando tambien el fin de cadena



return 0;
}
