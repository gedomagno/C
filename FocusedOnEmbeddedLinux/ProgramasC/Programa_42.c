/*Programa que genera un hilo el cual imprime un hola mundo, la funcion del hilo recibe un argumento (5) y la funcion exit manda una señal para avisar que el hilo ha terminado
Es importante señalar que el paso de argumentos a la funcion del hilo se debe ahcer mediante un puntero a (estructura, vector, variable, etc)*/

#include<stdio.h>
#include<pthread.h>

void* funcion_hilo(void*arg);

int main(){
	pthread_t idhilo;
	int argfunhilo=5;
	int*sendetermino;

	pthread_create(&idhilo,NULL,funcion_hilo,&argfunhilo);

	pthread_join(idhilo,(void**)&sendetermino);
	printf("El hilo ha terminado y mando %d\n", *sendetermino);

return 0;
}

void* funcion_hilo(void*arg){
	printf("Hola Mundo, Soy el hilo\n");
	pthread_exit(arg);
}
