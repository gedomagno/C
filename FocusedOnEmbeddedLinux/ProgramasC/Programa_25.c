/*Programa con un proceso, el padre escribe y el hijo lee.
Se observa que termina primero el padre por lo que el hijo queda huerfano, sin embargo los resultados son los que se esperaban*/

#include<stdio.h>

int main(){
	int var;
	int pipefd[2];
	pipe(pipefd);		//genero mi pipe
	var=fork();
	if(var){					//codigo padre. Escribe
			char MenEnv[20];	//buffer donde escribire el mensaje
			close(pipefd[0]);	//cierro leer
			printf("Ingrese un mensaje: ");
			scanf("%s", MenEnv);
			write(pipefd[1], MenEnv,20);
			}
		else{					//codigo hijo. Leer
			char MenRec[20];	//bufer de donde leere el mensaje
			close(pipefd[1]);	//cierro escribir
			read(pipefd[0], MenRec,20);
			printf("Mensaje recibido %s\n", MenRec);
			}



return 0;
}
