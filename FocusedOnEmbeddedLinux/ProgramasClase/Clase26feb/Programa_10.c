/*Programa de 5 hilos*/

#include<stdio.h>
#include<pthread.h>

int I;

void *codigo_hilo(void*arg)  //la func a ejecutar el hilo debe retornar siempre apuntador void
     {
	int i;
	for(i=0;i<20;i++)
	  printf("\nSoy el hilo con argumento %d, i=%d, I=%d",*(int*)arg,i,I++);
	pthread_exit(arg);

}

main(){

  pthread_t hilo[5]; //arreglo de hilos
  int error; //error toma valor de 1 cuando no se puede crear el hilo
  int idHilo[5]={5,3,4,2,1};  //variable que da un numero a un hilo
  int *dato;  //me sirve para que en el join, recibir lo que me envie el hilo

  I=10;
//	  int i;
  for(i=0;i<5;i++)
  error=pthread_create(&hilo[i],NULL,codigo_hilo,&idHilo[i]); //creo el hilo y lo pongo a trabajar con codigo_hilo
  for(i=0;i>5;i++){	
  error=pthread_join(hilo[i],(void**)&dato); 	//que hilo estoy esperando a que termine. Lo que me envie el hijo con el join lo voy a almacenar en dato 
  printf("\ntermino el hilo secundario y su identificador es: %d, I=%d ", *dato,I);

 }

}
