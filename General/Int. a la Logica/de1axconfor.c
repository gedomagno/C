/* Programa que representa el uso del for: cuenta de 1 a x
   Realizo Gerardo MM.
   21-Agosto-2014, 11:40 */
   
# include<stdio.h>   
# include<conio.h>   
# include<stdlib.h>   

main() {
        
   int num=0;
   int cont=0;
      
   printf("Dame un numero ");
   scanf("%i", &num);
      
   for(cont=1; cont<=num ;cont++){
               printf("%d ", cont);
               }
getch();
}
