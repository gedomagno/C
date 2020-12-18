#include<stdio.h> //calcula la serie de Fibonacci

main(){

   int ant1=1,ant2=1,n,i,suma;
   printf("Dame un valor");
   scanf("%i",&n);

   for(i=0; i<n; i++)
   {
     suma=ant1+ant2;
     ant1=ant2;
     ant2=suma;
   }
   printf("el elemento de la serie de Fibonacci es: %i", suma);
      getch(); 
       
       }
