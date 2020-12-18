/*Programa que genera un hilo, el cual suma dos arreglos y envia una senal de termino
Para pasar parametros a la funcion del hilo es mediante apuntador a algo(estructura,vector, variable, etc)*/

#include<stdio.h>
#include<pthread.h>

int A[5],B[5],C[5];
void* funcion_hilo(void*arg);

int main(){
	pthread_t idhilo;
	int argfunhilo=5;
	int* sendetermino;
	int i;	

	for(i=0;i<5;i++){		//llenado de arreglos
		A[i]=i;		//A={0,1,2,3,4}
		B[i]=i+10;	//B={10,11,12,13,14}
		}	

	pthread_create(&idhilo,NULL,funcion_hilo,&argfunhilo);	//genero el hilo y le mando un 5 a la funcion

	pthread_join(idhilo,(void**)&sendetermino);	// lo que me envie exit lo guardo en sendetermino
	
	for(i=0;i<5;i++){		//impresion del resultado del hilo
		printf("C[%d]=%d\n",i,C[i]);	
	}
	printf("\nEL hilo termino y mando %d\n", *sendetermino);


return 0;
}

void* funcion_hilo(void*arg){
	int i=0;
	for(i=0;i<5;i++){
		C[i]=A[i]+B[i];
	}
	pthread_exit(arg);		//termina el hilo y mando lo que recibio la funcion como argumento
}
