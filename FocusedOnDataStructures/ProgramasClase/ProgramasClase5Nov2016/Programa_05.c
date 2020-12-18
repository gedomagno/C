/*Suma de Arreglo de estructuras*/
#include<stdio.h>

typedef struct Complejo{
    int real;
    int imaginario;
    }numComplejo;

    void imprime(numComplejo c){        //funcion impresion
        printf("%d,%d\n", c.real,c.imaginario);
    }

    numComplejo suma(numComplejo aux1,numComplejo aux2){    //funcion suma
        numComplejo resultado;
        int i=0;
        //for(i=0;i<5;i++)
        resultado=aux1+aux2;

    return resultado;
    }

    int main(){

        numComplejo num1[5];
        numComplejo aux2[5];
        numComplejo sum[5];
        int i=0;

        for(i=0;i<5;i++)
        scanf("%d,%d",&aux1[i].real,&aux1[i].imaginario);

        for(i=0;i<5;i++)
        scanf("%d,%d",&aux2[j].real,&aux2[j].imaginario);

        for(i=0;i<5;i++)
        sum[i]=suma(aux1[i],aux2[i]);

        imprime(res[i]);


/*        numComplejo x,y;
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
*/
    return 0;
    }
