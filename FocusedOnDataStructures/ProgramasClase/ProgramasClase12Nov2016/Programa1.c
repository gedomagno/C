
#include<stdio.h>

int main()
{
    int i;

    short edades[4];
    long numeros[]={2,3,5};
    int resultados[7];
    float pagos[12];
    double temperaturas[40];
    char letras[20];    //cadena de caracteres
    char mi_nombre[]={'j','o','s','e'}; //arreglo de caracteres
    char frase[]="Esta es una frase";

    edades[0]=20;
    edades[1]=23;
    edades[2]=21;
    edades[3]=26;

    for(i=0;i<7;i++)
    {
        printf("\nIntroduce el resultado[%d]: ",i);
        scanf("%d",&resultados[i]);
    }
    for(i=0;i<7;i++)
    {
        printf("\nValor de resultado[%d]: %d",i,resultados[i]);
    }
}
