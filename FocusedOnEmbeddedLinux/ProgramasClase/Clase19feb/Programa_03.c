/*Programa con funcion fork*/
#include<stdio.h>

 void main(){
	int pid;
	pid=fork();	//al proceso padre le regresa el pid del hijo y al proceso hijo se le da el valor de cero
	printf("\n Hola Mundo: %d,pid=%d",getpid(),pid);	//getpid me obtiene el pid del proceso
	
}
