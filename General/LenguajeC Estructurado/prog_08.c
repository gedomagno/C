#include<stdio.h>// uso de funciones

int suma(int a, int b);
void imprimir(int res);

main(){
       int x, y;
       printf("Dame el primer valor");
       scanf("%i",&x);
       printf("Dame el segundo valor");
       scanf("%i",&y);
       imprimir(suma(x,y));
       getch();       
       }
       
int suma(int a, int b)
{
    int resultado;
    resultado=a+b;
    return resultado;
}
            
void imprimir(int res)
{
   printf("El resultado es %i", res);
}     
 //la funcion void no es necesario llevar el return
