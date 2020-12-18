#include<stdio.h> // inversion de numeros por medio de funciones

void intercambio(int x,int y);

main(){
       int a=1,b=2;
       printf("Los numeros originales son a=%d y b=%d\n",a,b);
       intercambio(a,b);
       getch();
       }
       
void intercambio(int x, int y)       
{
     int aux;
     aux=x;
     x=y;
     y=aux;
     printf("Los numeros invertidos son a=%d y b=%d\n", x,y);
     }
