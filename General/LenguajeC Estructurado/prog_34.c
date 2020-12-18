#include<stdio.h> //programa que determina si un numero ingresado es par o impar

main()
{
      int numero;
      printf("Dame un numero\n");
      scanf("%d", &numero);
      
      if(numero%2==0)
         {
          printf("El numero %d es par",numero);
         }else
         { 
          printf("El numero %d es impar", numero);
         } 

      getch();            
}
