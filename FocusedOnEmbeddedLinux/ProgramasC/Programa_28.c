
/* MALDONADO MARTINEZ GERARDO

Programa con dos procesos hijos. El hijo 1(cliente) envia un mensaje al padre(kernel)
El padre lee ese mensaje y lo envia al hijo 2(servidor)
El hijo 2 lee ese mensaje y lo presenta en pantalla*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int var1,var2;
	int pipe1fd[2], pipe2fd[2];
	int senalfin, senalH1,senalH2;
	pipe(pipe1fd);			//genero pipe1
	pipe(pipe2fd);			//genero pipe2

	var1=fork();				//genero un hijo

	if(var1){					//codigo padre

				var2=fork();		//genero otro hijo
			   	  if(var2){			//sigo en codigo padre
									//leo lo que envia hijo1

							wait(&senalH1);			//el padre espera a que el hijo 1 termine
							char MenRecH1[20];		//mensaje recibido desde hijo1
							close(pipe1fd[1]);
							read(pipe1fd[0],MenRecH1,20);
							
							printf("hijo1 terminó, senal %d\n",senalH1>>8);
							printf("Mensaje desde hijo1: %s\n", MenRecH1);
							
							//el padre manda el mensaje al hijo2
							
							close(pipe2fd[0]); 							//cierro leer de pipe2
							write(pipe2fd[1],MenRecH1,20);				//escribo el mensaje de H1 en pipe2
							wait(&senalH2);								//espero a que hijo 2 termine
							printf("Hijo2 ha terminado,senal %d\n", senalH2>>8);
									
						}
				     else	{		//codigo hijo2. Leer lo que envia el padre
				     			char MenRecP[20];		//buffer
				     			close(pipe2fd[1]);
				     			read(pipe2fd[0],MenRecP,20);
				     			printf("Mensaje enviado desde el padre: %s\n", MenRecP);
				     			exit(5);					//aviso de termino, hijo2
				     		}

			}
	    else	{								//codigo hijo1. Escribir mensaje con pipe1
	    			char MenEnvH1[20];		//mensaje enviado desde hijo1
	    			printf("Ingrese el mensaje a enviar al kernel: ");	
	    			scanf("%s", MenEnvH1);
				close(pipe1fd[0]);		//cierro lo que no ocupo	    		     	
	    			write(pipe1fd[1],MenEnvH1,20);			//envio mensaje desde hijo1
	    			exit(8);									//avsio,hijo1 termino
					
	    		}

return 0;
}