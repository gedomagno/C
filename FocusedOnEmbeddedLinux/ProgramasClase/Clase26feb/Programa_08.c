/*Programa de hilos*/

#include<stdio.h>
#include<pthread.h>

void *codigo_hilo(void*arg)  //la func a ejecutar el hilo debe retornar siempre apuntador void
     {
	int i;
	for(i=0;i<20;i++)
	  printf("\nSoy el hilo con argumento %d, i=%d",*(int*)arg,i);
	pthread_exit(arg);

}

main(){

  pthread_t hilo; //variable q idintifica un hilo
  int error; //error toma valor de 1 cuando no se puede crear el hilo
  int idHilo=5;  //variable que da un numero a un hilo
  int *dato;  //me sirve para que en el join, recibir lo que me envie el hilo

  error=pthread_create(&hilo,NULL,codigo_hilo,&idHilo); //creo el hilo y lo pongo a trabajar con codigo_hilo
  error=pthread_join(hilo,(void**)&dato); 	//que hilo estoy esperando a que termine. Lo que me envie el hijo con el join lo voy a almacenar en dato 
  printf("\ntermino el hilo secundario y dato es: %d \n ", *dato);

}

