/*Programa con un proceso, el hijo escribe un mensaje y el padre lee*/

#include<stdio.h>


int main(){
	int var;
	int pipefd[2];
	pipe(pipefd);
	var=fork();
	if(var){				//codigo padre. Leer
			char MenRec[20];
			close(pipefd[1]); 
			read(pipefd[0],MenRec,20);		   
			printf("Mensaje recibido: %s\n", MenRec);
 		   }
	   else{				//codigo hijo. Escribir
			char MenEnv[20];
			close(pipefd[0]);
			printf("ingrese un mensaje: ");	
			scanf("%s", MenEnv);
			write(pipefd[1],MenEnv,20);
		   }



return 0;
}
