#include<stdio.h>
main(){
       int i,n;
       printf("Dame un numero menor a 10");
       scanf("%i",&n);
       if(n>10)
          printf("El numero es mayor a 10");     
          else
          {  for(i=0; i<=n;i++)
             printf("%i\t\t\n",i);
             }
          getch();      
       }

