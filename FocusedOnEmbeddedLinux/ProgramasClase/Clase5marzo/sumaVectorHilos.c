/* Programa que muestra el uso de hilos POSIX

   Función: Realiza la suma de dos vectores de 
   1000 elementos cada uno, obteniendo un tercer 
   vector resultado.

   El trabajo de la suma lo hacen dos hilos, 
   cada uno calcula la suma de una mitad del 
   arreglo.

   El hilo principal escribe el vector resultado
*/

#include <stdio.h>
#include <pthread.h>


int x[1000], y[1000], z[1000];

/* Los dos hilos ejecutan la misma función */
void *suma(void *h)
{
   int i, lim;
   lim=*(int *)h;
   /* cada hilo suma su mitad */
   for(i=(lim-1)*500;i<lim*500;i++)
      z[i]=x[i]+y[i];

   pthread_exit(NULL);
}
 
main()
{
   int i,numh1=1,numh2=2;
;
   pthread_t hilo1,hilo2;
   
   for (i=1;i<=1000;i++)
   {       
        x[i-1]=i;
        y[1000-i]=i;	
   }   
   pthread_create(&hilo1,NULL,suma,&numh1); 
   pthread_create(&hilo2,NULL,suma,&numh2);

   pthread_join(hilo1,NULL);
   pthread_join(hilo2,NULL);

   printf("El vector z es:\n");
   for(i=0;i<1000;i++)
	printf("z[%d]=%d\n",i,z[i]);
}
