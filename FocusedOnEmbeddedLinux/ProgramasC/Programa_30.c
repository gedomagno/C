/*Programa que genera un proceso hijo, el hijo escribe HOLA  y el padre lo lee mediante el uso de un pipe*/

#include<stdio.h>

int main(){
	int pid, pipefd[2]; //fd son los descriptores de archivos. 
	pipe(pipefd); 	//genero la pipe
	pid=fork();		//genero el proceso

	if(pid){		//codigo padre
      	       char MenEnv[4];	//es el buffer (en el padre) a donde llega lo que envia el hijo que e
		close(pipefd[1]); 	//cierro el fd que no usare			
		read(pipefd[0],MenEnv, 4);		//funcion para leer
		printf("\nMi hijo me envio %s\n ", MenEnv);
			}			
	else{
		
               close(pipefd[0]);	//cierro el fd que no usare
		printf("Soy el hijo y le envio un mensaje a mi padre\n");
		write(pipefd[1], "HOLA", 4+1);  //que le envio y de que longitud es el mensaje (SIN OLVIDAR EL FIN DE CADENA)
}

return 0;
}
