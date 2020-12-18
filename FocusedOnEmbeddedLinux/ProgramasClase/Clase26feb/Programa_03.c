#include<stdio.h> // le adiciono el wait con parametro para que no quede huerfano hijo	
#include<stdlib.h>

void main (){
	int pid,recibe;
	pid=fork();
	if (pid){
	   wait(&recibe);	
	   printf("Termino mi hijo y me envio %d\n",recibe>>8);

}	
	else{
	   long i;
 	   for(i=0;i<1000000;i++);		
	   printf("\n Soy el hijo %d\n",getpid(),getppid());
	   exit(8);
}


}
