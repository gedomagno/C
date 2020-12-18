/*Programa que genera dos hilos que suman dos arreglos, el hilo1 suma la primer mitad de los arreglos, el hilo2 suma la segunda mitad de los arreglos, los dos hilos ejecutan la misma funcion */

#include<stdio.h>
#include<pthread.h>

int A[]={0,0,1,1};
int B[]={0,0,1,1};
int C[4];

void* funcion_hilo(void*arg);

int main(){
	int i;
	pthread_t idhilo1, idhilo2;
	int arg1funhilo=1;	//argumento para el hilo1 
	int arg2funhilo=2;	//argumento para el hilo2
	int*sendetermino;	//senal de termino del hilo de los hilos. Solo se requiere una porque solo se ejecuta una señal exit
	
	pthread_create(&idhilo1,NULL,funcion_hilo,&arg1funhilo);	//genero un hilo y le paso a la funcion hilo su argumento (1, como apuntador)
	pthread_create(&idhilo2,NULL,funcion_hilo,&arg2funhilo);	//genero otro hilo y le paso a la funcion hilo su argumento (2, como apuntador)

	pthread_join(idhilo1,(void**)&sendetermino);
	printf("El hilo 1 ha terminado y envio %d\n", *sendetermino);
	pthread_join(idhilo2,(void**)&sendetermino);
	printf("El hilo 2 ha terminado y envio %d\n", *sendetermino);

	for(i=0;i<4;i++){		//impresion del resultado de los hilos
		printf("C[%d]=%d\n",i,C[i]);
}

return 0;
}

void* funcion_hilo(void*arg){
	int i;	
	int argrecibido=*(int*)arg;	//casteo de lo que recibe la funcion 

	if(argrecibido==1)	//truquito para que la funcion trabaje como yo quiero de acuerdo al argumento que se le pasa a funcion_hilo
		{
			for(i=0;i<2;i++)
			C[i]=A[i]+B[i];
		}
	else{
			for(i=2;i<4;i++)
			C[i]=A[i]+B[i];		
		}
	pthread_exit(arg);
}

