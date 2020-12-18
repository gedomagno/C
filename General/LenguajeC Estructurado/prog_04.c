#include<stdio.h> //pgr que usa switch para hacer una operacion determniada por el usuario

main(){
       int opcion, a,b;
       float res=0.0;
       printf("elige una de las siguientes ocpiones");
       printf("\t\n 1: Suma \n 2: Resta \n 3: Multiplicacion \n 4: Division");
       scanf("%i",&opcion);
       if(opcion<=4)
       {
         printf("Dame el primer valor");
         scanf("%i",&a);
         printf("Dame el segundo valor");
         scanf("%i",&b);
       
         switch(opcion){
               case 1: res=a+b;
               break;
               case 2: res=a-b;
               break;
               case 3: res=a*b;
               break;
               case 4: (float)res=a/b;
               break;
                        }
         printf("%.2f", res);                                       
       }  
         else 
          printf("Opcion no valida");

       getch();       
       }
