/*Programa que hace la suma de dos vectores (hilos) ademas le adiciono 5 hilos mas*/
#include<stdio.h>
#include<pthread.h>

#define HILOS 5
#define N 100

long sumaVecA, sumaVecB;
int A[N], B[N], C[N];
//#define incremento N/HILOS

void *incVector(void*hilo) //los hilos nones decrementen a A 1, los pares a b	
{	
	int i,j;
	for(i=N-1;i>=0;i-=2){
		if(*(int*)hilo%2){  //los hilos nones haran esto
			sumaVecA=sumaVecA+A[i]
		  	A[i]+=1;
		}
		else{
			sumaVecB=sumaVecB+B[i];    //*****************	
			B[i]-=2;
			}
			for(j=0;j<10000;j++)
			}	
	pthread_exit(NULL);
} 

void *sumaParcial(void*hilo)
{
	int lim_inf, lim_sup,i;
	lim_inf=*(int*)hilo*N/HILOS;     //cast y luego multiplicacion 	 
	lim_sup=lim_inf + N/HILOS;

	for(i=lim_inf;i<lim_sup;i++)
		{	
			C[i]=A[i]+B[i];
		}
	pthread_exit(hilo);	//para terminar 
}	

int main()
{
	pthread_t hilos[HILOS], hilos2[HILOS];
	int i,error;
	int h[HILOS], h2[HILOS];
	int*valor;

	for(i=0;i<100;i++){		//llenado de arreglos
			A[i]=i;
			B[i]=100-i;
		}

	for(i=0;i<HILOS;i++){
			error=pthread_create(&hilos[i], NULL,sumaParcial, &h[i]);
						   }

	for(i=0;i<HILOS;i++){
		h2[i]=i;
		error=pthread_create(&hilos2[i], NULL,incVector,&h2[i] );
						  }	

	for(i=0;i<HILOS;i++){					//espera a que termine
			error=pthread_join(hilos[i],(void**)&valor);
			printf("Hilo %d terminado\n", *valor);
		                                    }

	for(i=0;i<N;i++){			//for de impresion
		if(i%5==0)				//para que imprima 5 en cada linea
			printf("\n");
		printf("A[%d]=%d, ", i,A[i]);
						}

	printf("\n Suma Vector A %d",sumaVecA);	//*********
	printf("\n Suma Vector A %d",sumaVecB);

	for(i=0;i<N;i++){			//for de impresion
		if(i%5==0)				//para que imprima 5 en cada linea
			printf("\n");
		printf("B[%d]=%d, ", i,B[i]);
						}



	for(i=0;i<N;i++){			//for de impresion
		if(i%5==0)				//para que imprima 5 en cada linea
			printf("\n");
		printf("C[%d]=%d, ", i,C[i]);
						}

return 0;
}
