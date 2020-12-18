/*Programa que suma dos vectores de 100 elementos, se tiene a 5 hilos cada hilo sumara 20 elementos de los arreglos. La suma del arreglo debe de dar siempre 100*/

#include<stdio.h>
#include<pthread.h>
#define N 100	//dimension del arreglo
#define HILOS 5 //numero de hilos

void* funcion_hilo(void*arg);

int A[N],B[N],C[N];

int main(){
	pthread_t idshilos[5];	//arreglo para guardar el id de los hilos 
	int argfunhilo[5]={0,1,2,3,4};	//argumentos para la funcion_hilo
	int*sendetermino;	//lugar en donde se guarda lo que exit manda
	int i;

	for(i=0;i<N;i++)	//llenado de los arreglos
	{
		A[i]=i;
		B[i]=100-i;	
	}

	for(i=0;i<HILOS;i++)	//generacion de los hilos 
	{
		pthread_create(&idshilos[i],NULL,funcion_hilo,&argfunhilo[i]);	//generacion de los hilos
	}

	for(i=0;i<HILOS;i++)	//espera de los hilos
	{
		pthread_join(idshilos[i],(void**)&sendetermino);
		printf("Termino el hilo %d y envio %d\n", i+1,*sendetermino);	
	}
	
	for(i=0;i<N;i++)
	{
		if(i%5==0)
			printf("\n");	
		printf("C[%d]=%d,",i,C[i]);	
	}
return 0;
}

void* funcion_hilo(void*arg){
	int i=0;
	int argrecibido=*(int*)arg;	//casteo del void generico que recibe la funcion
	
	for(i=argrecibido*(N/HILOS);i<(argrecibido+1)*(N/HILOS);i++)
	{
		C[i]=A[i]+B[i];		
	}
	pthread_exit(arg);	//aviso de que el hilo correspondiente ha terminado
}
