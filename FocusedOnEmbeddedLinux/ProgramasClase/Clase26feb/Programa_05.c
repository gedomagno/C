/*Programa donde el padre se comunica con su hijo*/

#include<stdio.h>
#include<string.h>

void main(){
	int pid, pipefd[2];//
	pipe(pipefd); //genero el pipe
	pid=fork();
	if(pid){	//lo que hace el padre
	   char mensajeRec[20];
	   close(pipefd[1]); //cierro el pipe 1
	   read(pipefd[0],mensajeRec,20);
	   printf("\n Mensaje recibido:%s",mensajeRec);	
	   	}
        else{		//lo que hace el hijo
	   char mensajeEnv[20];
	   close(pipefd[0]);
	   printf("\n Soy el hijo dame mensaje");					
	   gets(mensajeEnv);
	   write(pipefd[1],mensajeEnv,strleng(mensajeEnv)+1); //el 1 es para incluir el fin de cadena

}  	
	   
}

