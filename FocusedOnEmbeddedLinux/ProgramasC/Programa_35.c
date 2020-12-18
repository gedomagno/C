/*Programa que genera dos hijos.
Hijo 1 escribe y envia a padre
Padre lee y envia a hijo 2
Hijo 2 lee y envia a pantalla*/

#include<stdio.h>

int main(){
	int var1, var2;
	int pipe1fd[2], pipe2fd[2];
	var1=fork();	
	
	if(var1){								//codigo padre
				var2=fork();
//   			        char MenRecdH1[20];
				if(var2){					//sigo en codigo padre. Leer desde hijo 1

							close(pipe1fd[1]);		//cierro escribir
							read(pipe1fd[0], MenRecdH1,20);		//padre LEE
//							printf("Mi hijo 1 me envio: %s\n", MenRecdH1);
							
							close(pipe2fd[0]);			//cierro leer
							write(pipe2fd[1],MenRecdH1,20);			//padre ESCRIBE
						}	
				else	{									//codigo hijo 2. Lee desde Padre
							close(pipe2fd[1]);			//cierro escribir				
							read(pipe2fd[0], MenRecdH1,20);
							printf("Mi padre me envio: %s\n", MenRecdH1);
				
						}		
			 }
	else	{								//codigo hijo1. Escribir
				char MenEnvdH1[20];
				printf("\n Escriba el mensaje: \n");
				scanf("%s", &MenEnvdH1);
				close(pipe1fd[0]);			//cierro leer
				write(pipe1fd[1],MenEnvdH1,20);
			}	 





return 0;
}