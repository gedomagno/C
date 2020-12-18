/*Programa que maneja un arreglo de 5 hilos y una variable global. El valor de la var global se ve modificado por los hilos*/

#include<stdio.h>
#include<pthread.h>

int I;	//variable global con valor inicial cero

void* funcion_hilo(void*arg);

int main(){
	pthread_t idhilos[5];	//arreglo donde se guardan los id's de los 5 hilos que genero
	int argfunhilo[]={5,4,3,2,1};	//arreglo de argumentos a pasar a la funcion de los hilos
	int*senalhilo;

	I=10;
	int i=0;

	for(i=0;i<5;i++)			//genero mis 5 hilos
		{	
			pthread_create(&idhilos[i],NULL,funcion_hilo,&argfunhilo[i]);	
		}

	for(i=0;i<5;i++)			//espero a que los hilos terminen
		{
			pthread_join(idhilos[i],(void**)&senalhilo);
		}
	printf("\n Termino un secundario devolviendo %d\n Variable Global(I) %d ", *senalhilo,I);	//la var Global se ve afectada porque todos los hilos modificaron su valor

return 0;
}

void* funcion_hilo(void*arg){
	int i;
	for(i=0;i<20;i++){
		printf("Iteracion %d, hilo con argumento %d, valor de I (global) %d\n",i,*(int*)arg,I++);
	}

	pthread_exit(arg);



}
