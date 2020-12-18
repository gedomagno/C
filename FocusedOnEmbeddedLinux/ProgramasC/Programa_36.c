/*Programa con dos hijos
Hijo1. Escribe y manda a Padre HOLA
Padre. Lee HOLA y manda a hijo 2 LOLA
Hijo 2. Lee LOLA depadre y manda  a pantalla LOLA.
*/

#include<stdio.h>
#include<string.h>

int main(){
	int var1,var2;
	int pipe1fd[2], pipe2fd[2];
	
	var1=fork();
	
	if(var1){						//codigo padre
				var2=fork();
				if(var2){			//sigo en codigo padre
							char MenRecdH1[4];
							close(pipe1fd[1]);			//cierro escrbir
							read("pipe1fd[0]", MenRecdH1,4);
							printf("Hijo 1 me mando: %s\n", MenRecdH1);

				     			close(pipe2fd[0]);	//cierro leer de pipe2fd	
				     			write(pipe2fd[1],"LOLA",4);	

						}
				     else	{				//codigo hijo 2
							char MenEnvdP[4];
							close(pipe2fd[1]);		//cierro 
							read(pipe2fd[0],"MenEnvdP",4);
							printf("Mi padre me envio %s\n", MenEnvdP);
				                }
	
			}
	     else	{		//codigo hijo 1
	     
	     				close(pipe1fd[0]);
	     				write("pipe1fd[1]", "HOLA", 4);
			}

return 0;
}