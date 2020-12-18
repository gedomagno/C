#include<stdio.h>
#include<stdlib.h>

main(){
       int n, i;
       int *pnt;
       printf("Dame el numero de datos a entrar");
       scanf("%i", &n);
       pnt=(int*)malloc(sizeof(int)*n); // reserva en memoria los espacios indicados 
       for(i=0; i<n; i++){
             printf("Dame el numero %i", i+1);
             scanf("%i",(pnt+i));
             }
       printf("\n Tus nuneros fueron: ");
       for(i=0;i<n;i++)
           printf("%i ",*(pnt+i));
       getch();    
       }
