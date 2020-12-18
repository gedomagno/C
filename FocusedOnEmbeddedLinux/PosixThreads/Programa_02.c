/*Programa con una variable global y un hilo
NO SIRVE*/


#include<stdio.h>
#include<pthread.h>

int I;

void* funcion_hilo(void*arg);

int main(){
	pthread_t idhilo;	//variable donde guardo el id del hilo
	int argfunhilo=5;	//argumento que le paso a la funcion del hilo
	int *senalhilo;		//senal que me envia el hilo cuando termina

	pthread_create(&idhilo,NULL,funcion_hilo,&argfunhilo);		//funcion que crea el hilo
	
	pthread_join(idhilo,(void**)&senalhilo);	//espera a que el hilo termine
	printf("Termino el hilo y me envio como senal %d, el valor de I=%d", *senalhilo,I);

return 0;
}

void* funcion_hilo(void*arg){
	int i=0;
	for(i=0;i<20;i++)
	printf("\n Soy el hilo con argumento %d, i=%d,I=%d", *(int*)arg,i,I++);


}
