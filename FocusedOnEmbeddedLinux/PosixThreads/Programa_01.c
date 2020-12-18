/*Programa que genera un hilo, el cual imprime 20 veces un mensaje*/

#include<stdio.h>
#include<pthread.h>

void* funcion_hilo(void*arg);		//funcion que ejecuta el hilo

int main(){

	pthread_t idhilo; 	//el tipo de dato phtread_t guarda id's de hilos, aqui se guardara el id del hilo creado
	int argfunhilo=5;	//argumento de la funcion que ejecutara el hilo
	int*reshilo;		//el resultado devuelto por el hilo que esperamos se almacenara en esta direccion

	pthread_create(&idhilo,NULL,funcion_hilo,&argfunhilo);	/*1. en esta dir guardo el id del hilo que creo,2.Argumentos del hilo creado,3.funcionHilo,4.Argumentos de la funcion del hilo*/
	pthread_join(idhilo,(void**)&reshilo);	/*1.id del hilo que espero a que termine, 2.direccion donde guardo el resultado del hilo que espere a que terminara*/
	printf("\nTerminó el hilo y su resultado envaido es %d\n", *reshilo);

return 0;
}

void* funcion_hilo(void*arg){
	int i;
	for(i=0;i<20;i++)
	printf("\nSoy el hilo con argumento %d,i=%d",*(int*)arg,i);	//el casteo es de un void generico a int y para imprimir su contenido
	
	pthread_exit(arg);	//termino el hilo y mando arg
	



}
