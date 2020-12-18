/*Programa que genera dos hilos que suman dos arreglos, el hilo1 suma la primer mitad de los arreglos, el hilo2 suma la segunda mitad de los arreglos, los dos hilos ejecutan la misma funcion. LA FUNCION HILO UTILIZA UN FOR PARA REALIZAR LA TAREA*/

#include<stdio.h>
#include<pthread.h>

void* funcion_hilo(void*arg);
int A[]={0,0,1,1};
int B[]={0,0,1,1};
int C[4];	

int main(){
	int i;
	pthread_t idhilo1,idhilo2;
	int arg1funhilo=1;	//argumento que le paso a la funcion
	int arg2funhilo=2;	//argumento que le paso a la funcion	
	int*sendetermino;	//donde guardo lo que envia exit
	
	pthread_create(&idhilo1,NULL,funcion_hilo,&arg1funhilo);	//genero un hilo y le paso como argumento un apuntador a entero(1)
	pthread_create(&idhilo2,NULL,funcion_hilo,&arg2funhilo);	//genero otro hilo y le paso como argumento un apuntador a entero(2)

	pthread_join(idhilo1,(void**)&sendetermino);	//lo que mande exit lo guardo en sendetermino
	printf("El hilo 1 ha terminado y mando %d\n",*sendetermino);
	pthread_join(idhilo2,(void**)&sendetermino);	
	printf("El hilo 2 ha terminado y mando %d\n",*sendetermino);

	for(i=0;i<4;i++){		//resultado de los hilos
		printf("C[%d]=%d\n",i,C[i]);		
	}

return 0;
}

void* funcion_hilo(void*arg){
	int i;
	int argrecibido=*(int*)arg;	//casteo de lo que recibo en la funcion como argumento 
	for(i=(argrecibido-1)*2;i<(argrecibido*2);i++){	//truqito para que el for aplique de acuerdo al parametro que se le pase a la funcion
		C[i]=A[i]+B[i];
	}	
	
	pthread_exit(arg);



}

