/*Programa donde un proceso hijo lee y el padre escribe
Padre escribe, hijo lee. Lo anterior implica que el padre termine antes que el hijo, al parecer no genera conflictos*/

#include<stdio.h>

int main()
{
	int var, pipefd[2];
	pipe(pipefd);
	var=fork();
	if (var){								//codigo padre. Escribir
				char MenEnvdP[20];
			   	printf("\nIngrese el mensaje");	
			   	scanf("%s", MenEnvdP);
			   	close(pipefd[0]);			//cierro leer	
			   	write(pipefd[1], MenEnvdP, 20);	
			}
	else      {								//codigo hijo. Leer
				char MenRecdP[20];
				close(pipefd[1]);			//cierro escribir
				read(pipefd[0], MenRecdP,20);
				printf("Mi padre me envio: %s\n", MenRecdP);	
			}		

return 0;
}