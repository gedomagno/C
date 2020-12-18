#include<stdio.h>

int main(){
	int pid;
	printf("Antes del fork este proceso tiene el pid %d",getpid());
	pid=fork();
	printf("Hola Mundo,pid=%d",pid);
//	printf("el nuevo valor del pid es %d",getpid());

return 0;
}
