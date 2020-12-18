#include<stdio.h> // regresa el mayor de dos numeros por medio de funciones

int compara(int a, int b);

main(){
 int num1=0;
 int num2=0;
 int resultado=0;    
   
 printf("Introduzca dos numeros");
 scanf("%d %d",&num1,&num2);
 resultado=compara(num1, num2);
 printf("El numero mayor es %d",resultado);
 getch();
       }
       
int compara(int a, int b)       /* es importante ver que dentro de la funcion 
 no es necesario declarar a las variables que estan enunciadas en los argumentos
 de la misma*/
{
     int mayor;

     if(a>b)
        mayor=a;
     else
        {mayor=b;
        }    
     return mayor; // ¿se puede utilizar o no parentesis?
}
