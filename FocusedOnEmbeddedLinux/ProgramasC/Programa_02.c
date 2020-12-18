/*Programa que muestra el uso de la funcion getpid() la cual devuelve el pid de un proceso*/

#include<stdio.h>

int main(){
	int pid;
	printf("Hola Mundo\n");
	printf("Este proceso tiene el pid: %d\n", getpid()); //me devuelve el pid de un proceso
}
