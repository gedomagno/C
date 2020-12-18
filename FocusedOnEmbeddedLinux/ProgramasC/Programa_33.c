/*Programa que genra un proceso hijo y este le manda al padre lo que el usuario escribe*/
/*Hijo escribe, padre lee*/

#include<stdio.h>


int main()
{
	int var, pipefd[2];					//descriptores de archivos del pipe

	pipe(pipefd);						//genero el pipe 
	var=fork();
	if(var)
		{												//codigo padre. Leer
			char MenEnvdHijo[20];
			close(pipefd[1]);						//cierro el fd que no usare
			read(pipefd[0],MenEnvdHijo,20);
			printf("Mi hijo me envio: %s", MenEnvdHijo);
		}
     else	{										//codigo hijo. Escribir
			char Mensaje[20];
			printf("\n Escriba el mensaje ha enviar: ");
			scanf("%s", &Mensaje);
     			close(pipefd[0]);
     			write(pipefd[1], Mensaje, 20);
     		}

return 0;
}