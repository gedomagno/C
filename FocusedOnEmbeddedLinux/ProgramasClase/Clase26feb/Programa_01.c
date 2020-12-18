#include<stdio.h> // el fin es hacer que el papa termine antes que el hijo	

void main (){
	int pid;
	pid=fork();
	if (pid)
	   printf("Hola %d,pid=%d\n",getpid(),pid);	
	else{
	   long i;
 	   for(i=0;i<1000000;i++);		
	   printf("\n Soy el hijo %d\n",getpid(),getppid());
}


}
