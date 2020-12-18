

#include <stdio.h>
#include <pthread.h>

#define HILOS 5
#define N 100

long sumaVecA,sumaVecB;
int A[N],B[N],C[N];

void *incVector(void *hilo)
{
   int i,j;
   for (i=N-1;i>=0;i-=2){
      if(*(int *)hilo%2){
          sumaVecA=sumaVecA+A[i];
          A[i]+=1;
      }
      else{
          sumaVecB=sumaVecB+B[i];
          B[i]-=2;
      }
      for(j=0;j<10000;j++);
   }
   pthread_exit(NULL);
}

void *sumaParcial(void *hilo)
{
   int lim_inf, lim_sup,i;

   lim_inf=*(int*)hilo * N/HILOS;
   lim_sup=lim_inf+N/HILOS;

   for (i=lim_inf; i<lim_sup; i++)
   {
      C[i]=A[i]+B[i];
   }
   pthread_exit(hilo);
}

main(){
  pthread_t hilos[HILOS],hilos2[HILOS];
  int i,error;
  int h[HILOS],h2[HILOS];
  int *valor;

  for(i=0;i<N;i++){
     A[i]= i;
     B[i]= N-i;
  }

  for(i=0;i<HILOS;i++){
      h[i]=i;
      error=pthread_create(&hilos[i],NULL,sumaParcial,&h[i]);
  }

   for(i=0;i<HILOS;i++){
       h2[i]=i;
       error=pthread_create(&hilos2[i],NULL,incVector,&h2[i]);
   }

   for(i=0;i<HILOS;i++){
       error=pthread_join(hilos[i],(void **)&valor);
       printf("Hilo %d terminado\n",*valor);
   }

   for(i=0;i<N;i++){
       if (i%5==0)
         printf("\n");

       printf("A[%d]=%d, ",i,A[i]);
   }
   
   for(i=0;i<N;i++){
       if (i%5==0)
         printf("\n");

       printf("B[%d]=%d, ",i,B[i]);
   }

   for(i=0;i<N;i++){
       if (i%5==0)
         printf("\n");

       printf("C[%d]=%d, ",i,C[i]);

   
   }
    printf("\nsuma vector A %ld",sumaVecA);
   printf("\nsuma vector B %ld",sumaVecB);   
}
 








