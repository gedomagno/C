#include<stdio.h> // uso de funciones

int suma(int a, int b);

main(){
       int x, y;
       printf("Dame el primer valor");
       scanf("%i",&x);
       printf("Dame el segundo valor");
       scanf("%i",&y);
       printf("La suma es %i",suma(x,y));
       getch();
       
       }
       
int suma(int a, int b)
{
   return(a+b);
}
