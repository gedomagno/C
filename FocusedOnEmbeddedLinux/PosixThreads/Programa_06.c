/*Programa con dos hilos,hilo1 C=A+B, hilo2 D=E+F*/

#include<stdio.h>
#include<pthread.h>

void* funcion_hilo1(void*arg);
void* funcion_hilo2(void*arg);
int A[]={1,1,1,10,10,10};
int B[]={0,0,0,20,20,20};
int C[6],D[5];
int E[]={3,3,3,3,3};
int F[]={1,1,1,1,1};

int main(){
	pthread_t idhilo1,idhilo2;		//aqui guardo los id's de los hilos
	int i;
//	int argfunhilo1=1,argfunhilo2=2;
	int *senalhilo1;
	int *senalhilo2;

	pthread_create(&idhilo1,NULL,funcion_hilo1,NULL);	//genero un hilo
	pthread_create(&idhilo2,NULL,funcion_hilo2,NULL);	//genero otro hilo

	pthread_join(idhilo1,(void**)senalhilo1);
	printf("\nHilo1 termino mandando %d", *senalhilo1);	
	pthread_join(idhilo2,(void**)senalhilo2);
	printf("\nHilo2 termino mandando %d", *senalhilo2);
	
	for(i=0;i<6;i++)
	printf("C[%d]=%d\n",i,C[i]);

	for(i=0;i<6;i++)
	printf("D[%d]=%d\n",i,D[i]);

return 0;
}

void* funcion_hilo1(void*arg){
	int i;
	for(i=0;i<6;i++){
		C[i]=A[i]+B[i];
	}
	pthread_exit(NULL);
}

void* funcion_hilo2(void*arg){
	int i;
	for(i=0;i<5;i++){
		D[i]=E[i]+F[i];
}
	pthread_exit(NULL);

}
