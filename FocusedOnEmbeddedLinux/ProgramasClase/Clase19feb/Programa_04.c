/*Programa con funcion fork y con codigos diferentes*/
#include<stdio.h>

 void main(){
	int pid;
	pid=fork();	//al proceso padre le regresa el pid del hijo y al proceso hijo se le da el valor de cero
	if(pid)	//si el if es cero es falso por lo tanto este if ejecuta el papa
	printf("\n Hola Mundo: %d,pid=%d",getpid(),pid);	//getpid me obtiene el pid del proceso
	else
	printf("\n Soy el hijo %d\n",getpid());
		
}
