/*Programa que genera dos procesos, el hijo escribe algo y el padre lo lee, por medio de pipe*/

#include<stdio.h>
#include<string.h>

int main(){
	int pid, pipefd[2];
	pipe(pipefd);
	pid=fork();		//genero el proceso
	if(pid)	{			//codigo padre,  leer lo enviado
		char buf[20];			//buffer a donde llegara el mensaje	
		close(pipefd[1]);		//cierro el fd que no usare
		read(pipefd[0],buf,20);		//uso el fd[0] (lectura),leo del bufer de tamano 20
		printf("Mi hijo me envio: %s", buf);

	}else{				//codigo hijo, escribir un mensaje ingresado por teclado
		char MenEnv[20];
		printf("Ingrese el mensaje a enviar:\n");
		scanf("%s", &MenEnv);
		close(pipefd[0]);			//cierro el fd que no usare(lectura)
		write(pipefd[1],MenEnv, strlen(MenEnv)+1);
}

return 0;
}