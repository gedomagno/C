/*Programa que utiliza fork y obtenemos los pid de cada proceso*/

#include<stdio.h>

int main(){
	fork();	//aqui genero otro proceso
	printf("Hola Mundo. Este proceso tiene el pid %d\n",getpid()); //aqui se ejecuta el print papa y el print hijo



return 0;
}
