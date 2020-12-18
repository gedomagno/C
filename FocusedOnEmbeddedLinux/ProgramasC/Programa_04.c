/*Programa que utiliza fork en un printf por lo que se repiten los dos mensajes*/

#include<stdio.h>

int main(){
	fork();	//genero un proceso hijo y apartir de aqui repito el codigo
	printf("Hola Mundo\n");

//como resultado de fork, obtengo dos hola mundo uno impreso debido al papa y otro al hijo.

return 0;
}
