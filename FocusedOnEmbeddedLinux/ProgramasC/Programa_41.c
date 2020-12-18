/*Programa que genera un hilo, el cual imprime hola mundo.
La funcion hilo no recibe argumento, la señal exit tampoco envia algo*/

#include<stdio.h>
#include<pthread.h>

void* funcion_hilo(void*arg);	//funcion a ejecutar por el hilo

int main(){
	pthread_t idhilo;	//identificador del hilo

	pthread_create(&idhilo,NULL,funcion_hilo,NULL);
	pthread_join(idhilo,NULL);
	printf("\nEl hilo ha terminado\n");

return 0;
}

void* funcion_hilo(void*arg){
	printf("Soy el hilo hijo\n");
	printf("Hola Mundo");
	pthread_exit(NULL);
}
