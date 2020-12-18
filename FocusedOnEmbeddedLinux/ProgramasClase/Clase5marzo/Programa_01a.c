/*Programa que hace la suma de dos vectores (hilos)*/
#include<stdio.h>
#include<pthread.h>

#define HILOS 5
#define N 100  //en la tarea esto debe de cambiar a 119
int A[N], B[N], C[N];
//#define incremento N/HILOS

void *sumaParcial(void*hilo)
{
	int lim_inf, lim_sup,i;
	lim_inf=*(int*)hilo*(N/HILOS);     //cast y luego multiplicacion 	 
	lim_sup=lim_inf + (N/HILOS);

	for(i=lim_inf;i<lim_sup;i++)
		{	
			C[i]=A[i]+B[i];
		}
	pthread_exit(hilo);	//para terminar 
}	

int main()
{
	pthread_t hilos[HILOS];
	int i,error;
	int h[HILOS];
	int*valor;

	for(i=0;i<100;i++){		//llenado de arreglos
			A[i]=i;
			B[i]=100-i;
		}

	for(i=0;i<HILOS;i++){
			error=pthread_create(&hilos[i], NULL,sumaParcial, &h[i]);
						   }

	for(i=0;i<HILOS;i++){					//espera a que termine
			error=pthread_join(hilos[i],(void**)&valor);
			printf("Hilo %d terminado\n", *valor);
		                                    }

	for(i=0;i<N;i++){			//for de impresion
		if(i%5==0)				//para que imprima 5 en cada linea
			printf("\n");
		printf("C[%d]=%d, ", i,C[i]);
						}

return 0;
}
