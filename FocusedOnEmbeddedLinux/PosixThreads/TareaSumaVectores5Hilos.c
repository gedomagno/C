/*Programa que suma dos vectores(cada vector es de 119 elementos). Se generan 5 hilos, los primeros 4 hilos sumaran 24 elementos cada uno y el quinto sumara solo 23 elementos. Los 5 hilos utilizan una sola funcion. Cada elemento del vector resultado debe dar 100*/

#include<stdio.h>
#include<pthread.h>
#define N 119
#define HILOS 5

int A[N],B[N],C[N];

void*funcion_hilo(void*arg);

int main(){
	pthread_t idshilo[5];	//aqui guardo los id de los hilos
	int argfunhilo[5]={0,1,2,3,4};	//argumentos que le paso a funcion_hilo
	int*sendetermino;	//donde guardo lo que envia exit
	int i;

	for(i=0;i<N;i++)	//llenado de arreglos
	{
		A[i]=i;			//A[]={0,1,2,..,99}
		B[i]=100-i;		//B[]={100,99,98,..,1}
	}
	
	for(i=0;i<HILOS;i++)		//generacion de 5 hilos
	{
		pthread_create(&idshilo[i],NULL,funcion_hilo,&argfunhilo[i]);
	}

	for(i=0;i<HILOS;i++)		//espero a que terminen los hilos
	{
		pthread_join(idshilo[i],(void**)&sendetermino);
		printf("El hilo %d ha terminado su arg fue %d\n",i+1,*sendetermino);	
	}	

	for(i=0;i<N;i++)		//impresion del resultado
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
	int i;
	int argrecibido=*(int*)arg;		//casteo el argumento de la funcion_hilo

	if(argrecibido==4)
	   {					//aplica para el hilo 5
	   	 for(i=argrecibido*24;i<((argrecibido+1)*24)-1;i++)
			C[i]=A[i]+B[i];
	   }
  else {					//aplica para los primeros hilos
		 for(i=argrecibido*24;i<(argrecibido+1)*24;i++)
		 	C[i]=A[i]+B[i];
	   }
	pthread_exit(arg);		//envio sendetermino

}
