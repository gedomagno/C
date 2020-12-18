/*Programa que utiliza la llamada wait con parametro wait(&recibe). La variable recibe cacha la señal que manda exit. Exit manda un 8 como señal. La funcion exit sirve para terminar un proceso*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int pid,recibe;	//recibe, recibe la señal que manda la funcion exit (en este caso un 8 "big endian")
	pid=fork();
	if(pid){
		wait(&recibe); 	//espero a que el hijo termine y recibe guardo
		printf("Termino mi hijo(pid:%d) y me envio %d\n",getpid(),recibe>>8);	//recorro 8 bits a la derecha para "solapar" mi big endian
}	else{
		long i;
		for(i=0;i<1000000;i++);		//retardo
		printf("\nSoy el hijo %d, y mi padre es %d\n", getpid(),getppid());
		exit(8); 		//termino el proceso hijo y mando 8 como señal
}
return 0;
}	
