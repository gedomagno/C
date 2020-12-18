/*Programa donde genero un proceso hijo y al cual le adiciono un retardo para que termine primero el padre y luego el hijo. En este caso el hijo es adoptado por el proceso init*/
#include<stdio.h>

int main(){
	int pid;
	pid=fork();
	if(pid){	//codigo del proceso padre
		printf("Hola %d, pid:%d",getpid(), pid); //obtengo el pid del padre y el valor de la variable pid cuando se ejecuta el codigo del padre(en ese caso sera el pid del hijo)
	}else{	//codio de proceso hijo
		long i:
		for(i=0;i<1000000;i++);		//retardo para terminar primero el padre
		pintf("\n Soy el hijo %d\n", getpid(),getppid()); // imprimo u millon de veces, el pid el hijo y el valor pid del 
						
	}
	

return 0;
}
