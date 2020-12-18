/*Programa en el cual el padre termina antes que el hijo
DUDA: ¿NO DEBERIA DE VALER EL PID DEL HIJO 1?*/
#include<stdio.h>

void main(){
	int pid;
	pid=fork();
	if(pid){
		printf("Hola %d, pid=%d\n", getpid(),pid);
	}else{
		long i;
		for(i=0;i<1000000;i++);	//Es una forma de retardo 
			printf("\n Soy el hijo %d, %d", getpid(),getppid());
			
}
}

/*Como salida veo que se ejecuta primero el proceso padre, luego el prompt y luego el hijo*/
