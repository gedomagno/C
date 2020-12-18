/*Programa que utilza wait para que el padre espere al proceso hijo a que termine*/

#include<stdio.h>

int main(){
	int pid;
	pid=fork();
	if (pid){ 		//proceso padre
		wait (NULL);	//sirve para esperar a que el hijo termine antes de que el padre continue
		printf("Hola %d, pid %d\n",getpid(),pid);
}	else{			//proceso hijo
		long i;	
		for(i=0;i<1000000;i++);
		printf("\n Soy el hijo %d, %d\n",getpid(),getppid());
		}
return 0;
}

/*Como salida veo que se imprime primero lo del hijo y luego lo del padre*/
