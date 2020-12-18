/*Programa con un proceso hijo. El padre escribe y el hijo lee. Para evitar que el hijo quede huerfano se utiliza un wait para que el padre espere al hijo*/

#include<stdio.h>
#include<stdlib.h>		//necesaria cuando se usa wait y exit

int main(){
	int var;
	int pipefd[2];	
	int senal;		//señal que me avisa cuando el proceso hijo termina	
	pipe(pipefd);	//genero mi pipe
	var=fork();
	if(var){				//codigo padre. Escribe
			char MenEnv[20];
			close(pipefd[0]);	//cierro leer
			printf("Ingrese mensaje: ");
			scanf("%s", MenEnv);
			write(pipefd[1],MenEnv,20);	
 			wait(&senal); //espero a que mi hijo termine y me avise con (senal)
			printf("Papa recibe senal de terminacion del hijo: %d\n",senal>>8);
		   }
	   else{
			char MenRec[20];
			close(pipefd[1]);
			read(pipefd[0], MenRec,20);
			printf("Mensaje recibido %s\n", MenRec);			
			exit(8);
		   }


return 0;
}
