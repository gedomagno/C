/*Programa que suma los elementos de dos arreglos por medio de 5 hilos, el hilo 0 sumara los elementos del 0 al 19, el hilo 2 del 20 al 39 y asi sucesivamente*/

#include<stdio.h>
#include<pthread.h>

#define HILOS 5
#define N 100
int A[N], B[N], C[N];	//variables globales

void* funcion_hilo(void*arg);

int main(){
	pthread_t idshilos[HILOS];	//arreglo donde guardo los id de los hilos
	int*senalhilo; 		//lo que regresa cada hilo despues de terminar
	int argfunhilo[HILOS];
	int i;
	for(i=0;i<100;i++)		//llenado de arreglos
	{
		A[i]=i;
		B[i]=100-i;
	}

	for(i=0;i<HILOS;i++)
	{
		pthread_create(&idshilos[i],NULL,funcion_hilo,&argfunhilo[i]);	
	}
	
	for(i=0;i<HILOS;i++)
	{
		pthread_join(idshilos[i],(void**)&senalhilo);
		printf("Hilo %d terminado\n",*senalhilo);
	}

	for(i=0;i<100;i++)
	{	
		if(i%5==0)
		{
			printf("\n");		
		}		
		printf("C[%d]=%d",i,C[i]);
	}

return 0;
}

void* funcion_hilo(void*arg){
	int lim_inf,lim_sup,i;
	lim_inf=*(int*)arg*(N/HILOS);
	lim_sup=lim_inf+(N/HILOS);
	for(i=lim_inf;i<lim_sup;i++){
		C[i]=A[i]+B[i];
			}
	pthread_exit(arg);	
}
