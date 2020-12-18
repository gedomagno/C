/*Programa que genera dos hilos que suman dos arreglos, el hilo1 suma la primer mitad de los arreglos, el hilo2 suma la segunda mitad de los arreglos, los dos hilos ejecutan la misma funcion. LA FUNCION HILO UTILIZA UN FOR PARA REALIZAR LA TAREA
SE TRATA A la varible, idhilo1, idhilo2, arg1funhilo,arg2funhilo como dos arreglos
ES IMPORTANTISIMO INICIALIZAR EL ARREGLO DE ARGFUNHILOS*/

#include<stdio.h>
#include<pthread.h>

void* funcion_hilo(void*arg);
int A[]={0,0,1,1};
int B[]={0,0,1,1};
int C[4];

int main(){
	int i;
	pthread_t idshilos[2];	//idhilo1,idhilo2
	int argfunhilo[2]={1,2};		//arg1funhilo,arg2funhilo
	int*sendetermino;		//solo una senal porque solo se ejecuta una funcion exit

	for(i=0;i<2;i++)	//for para generar dos hilos,con el argumento correspondiente
		{
			pthread_create(&idshilos[i],NULL,funcion_hilo,&argfunhilo[i]);
		}	
	
	for(i=0;i<2;i++)		//for para esperar a que los hilos terminen
		{
			pthread_join(idshilos[i],(void**)&sendetermino);
			printf("Termino el hilo %d y envio %d\n",i+1,*sendetermino);	
		}

	for(i=0;i<4;i++)		//impresion del resultado de los hilos
	{
		printf("C[%d]=%d\n",i,C[i]);
	}

return 0;
}

void* funcion_hilo(void*arg){
	int i;
	int argrecibido;
	argrecibido=*(int*)arg;	//casteo de lo que recibe como argumento
	
	for(i=(argrecibido-1)*2;i<argrecibido*2;i++)	//truqito para que el for funcione en ambos casos (con el arg1funhilo y arg2funhilo)
	{
		C[i]=A[i]+B[i];
	}
	
	pthread_exit(arg);	//exit envia lo que recibe de argumento la funcion_hilo
}

