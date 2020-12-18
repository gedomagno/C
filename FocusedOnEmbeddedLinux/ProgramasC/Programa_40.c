/*Programa que muestra el uso de wait. Wait detiene la ejecucion del proceso padre hasta que el hijo termine, su valor de retorno es el pid del proceso hijo. En este caso el argumento de la funcion es NULL */
#include<stdio.h>
#include<stdlib.h>

int main(){
	int pid;
	int idenvhijo; //varibale donde almanceno el valor de retorno de wait(cuando el hijo termina)
	pid=fork();
	if(pid){	//procesp padre
		idenvhijo=wait(NULL);	//espero a que el proceso hijo termine
		printf("\nSoy el padre,pid %d y mi hijo cuando terminó me mando%d\n",getpid(),idenvhijo);
}	else{		//proceso hijo
		long i;
		for(i=0;i<1000000;i++);		//retardo de tiempo
		printf("\nSoy el hijo,pid %d ",getpid());
}

return 0;
}
