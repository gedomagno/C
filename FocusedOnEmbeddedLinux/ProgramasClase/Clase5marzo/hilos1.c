/*
int pthread_join(pthread_t thread, void **value_ptr)
void pthread_exit(void *value_ptr)
*/

#include <stdio.h>
#include <pthread.h>

int I;

void *codigo_hilo(void *arg){
	int i;
	for (i = 0; i < 20; ++i)
	{
		printf("Soy el hilo con argumento %d, i=%d\nGlobal: %d\n", *(int *)arg, i, I++);
	}
	pthread_exit(arg);
}

int main(int argc, char const *argv[])
{
	pthread_t hilo[5];
	int error, i;
	int idHilo[] = {5, 3, 4, 2, 1};
	int *dato;
	I = 10;

	for (i = 0; i < 5; ++i)
	{
		error = pthread_create(&hilo[i], NULL, codigo_hilo, &idHilo[i]);
		if (error)
			printf("No se pudo crear hilo.\n");
	}
	for (i = 0; i < 5; ++i)
	{
		error = pthread_join(hilo[i], (void **)&dato);
		printf("Terminó un hilo secundario y su identificador es: %d\nGlobal de hilo principal: %d\n", *dato, I);
	}
	return 0;
}