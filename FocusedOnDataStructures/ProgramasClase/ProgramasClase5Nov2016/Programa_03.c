/*Programa que suma dos numeros complejos mediante estructuras*/
#include<stdio.h>

typedef struct Complejo{
    int real;
    int imaginario;
    }numComplejo;

    void imprime(numComplejo c){        //funcion impresion
        printf("%d,%d\n", c.real,c.imaginario);
    }

    numComplejo suma(numComplejo num1,numComplejo num2){    //funcion suma
        numComplejo suma;
        suma.real=num1.real+num2.real;
        suma.imaginario=num1.imaginario+num2.imaginario;
    return suma;
    }

    int main(){

        numComplejo res;

        numComplejo x,y;
        scanf("%d",&x.real) ;
        scanf("%d",&x.imaginario);

        scanf("%d",&y.real) ;
        scanf("%d",&y.imaginario);

        imprime(x);
        imprime(y);


        res=suma(x,y);
        imprime(res);
        printf("%.4x",&res);    //imprime la direccion de memoria de la estructura

        printf("%.4x\n",&res.real);
        printf("%.4x\n",&res.imaginario);

        printf("Tamano del tipo de dato res %d", sizeof(res));

    return 0;
    }
