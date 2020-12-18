#include<stdio.h> // le adiciono el wait para que no quede huerfano hijo	

void main (){
	int pid;
	pid=fork();
	if (pid){
	   wait(NULL);	
	   printf("Hola %d,pid=%d\n",getpid(),pid);}	
	else{
	   long i;
 	   for(i=0;i<1000000;i++);		
	   printf("\n Soy el hijo %d\n",getpid(),getppid());
}


}
