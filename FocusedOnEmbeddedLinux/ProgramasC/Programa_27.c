/*Programa con dos procesos hijos. 
El hijo 1 envia un mensaje al padre(HOLA).
El padre recibe el mensaje del hijo1.
El padre manda otro mensaje DIFERENTE al hijo 2(LOLA)
El hijo 2 lee el mensaje del padre y lo presenta
USO WAITS PARA DETENER AL PADRE DE ACUERDO A MI CONVENIENCIA*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int var1,var2;
	int pipe1fd[2], pipe2fd[2]; //descriptores de archivos para dos pipes
	int senalH1;	//señal de aviso de termino de hijo1
	int senalH2;	//señal de aviso de termino de hijo 2	
	pipe(pipe1fd);	//generacion de dos pipes
	pipe(pipe2fd);
	var1=fork();
	if(var1){
			 var2=fork();
			 if(var2){		//sigo en codigo padre. Leer y luego Escribir
						char MenRecH1[20];
						wait(&senalH1);		//espera a que termine hijo1				
						close(pipe1fd[1]);	//cierro lo que no necesito
						read(pipe1fd[0],MenRecH1,20);
						printf("Mi hijo 1 termino, su senal es %d\n", senalH1>>8);
						printf("Mensaje de hijo1 %s\n: ",MenRecH1);	
	
						char MenEnvP[20];	//ahora papa envia a hijo2 un mensaje (usando pipe2)
						close(pipe2fd[0]);	//cierro leer de pipe2		 
						printf("ingrese mensaje para enviar a hijo 2: ");
						scanf("%s", MenEnvP);
						write(pipe2fd[1], MenEnvP,20);
						wait(&senalH2);	//padre no termines hasta que hijo 2 termine
						printf("Mi hijo 2 ha terminado, su señal es %d\n", senalH2>>8);			
				
					 }
				else {		//codigo hijo 2. Leer
						char MenRecP[20];
						close(pipe2fd[1]);		//cierro escribir de pipe2
						read(pipe2fd[0],MenRecP,20);	
						printf("Mi padre me envio %s\n", MenRecP);
						exit(5);		//aviso a mi padre que ya termnie
					
					 }			
		
			}
		else{				//codigo hijo1. Escribe 
			  char MenEnvH1[20];	//bufer
			  close(pipe1fd[0]);	//uso el pipe 1 
			  printf("ingrese mensaje a enviar al padre: ");
			  scanf("%s", MenEnvH1);
			  write(pipe1fd[1], MenEnvH1,20);
			  exit(8);			
			}

return 0;
}


