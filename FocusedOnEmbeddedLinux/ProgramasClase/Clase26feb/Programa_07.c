/*programa en el que el padre espera a que el hijo ejecute el comando ls -l*/

#include<stdio.h> 
#include<stdlib.h>

void main (){
	int pid,recibe;
	pid=fork();
	if (pid){
	   wait(NULL);	
	   printf("Termino mi hijo");

}	
	else{
	   printf("\n Soy el hijo y ejecutare el comando ls -l\n");
	   execlp("ls", "ls", "-l",(char*)0);	
	   exit(8);
}


}

