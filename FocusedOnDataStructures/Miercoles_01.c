#include<stdio.h>
#include<stdlib.h>
#define MAX 20

typedef struct {
    int tope;   //Hara referencia al indice de la pila
    int elem[MAX];
}Pila;

    Pila crearPila()    //funcion que crea una pila
{
    Pila p;
    p.tope=-1;
    return p;
}
    void push(int elem[],int*tope, int x)   //funcion push, introduce data la pila y actualiza tope
    {
        elem[++(*tope)]=x;

        int vacio(int tope)     //verifica si la pila esta vacia
        {
            if(tope<0)
                return 1;
           return 0;
        }
    }

        int pop(int elem[],int *tope)      // Funcion POP, expulsa el ultimo dato que entro
    {
        if(vacio(*tope)){       //VERIFICAMOS ANTES SI ESTA VACIa
            printf("La pila esta vacia\n");
            return -32768;
        }
        else
            return (elem[(*tope)--]);
    }


void imprimePila(int elem[],int *tope)
{
    int i;
    printf("[");
    for(i=0;i<=*tope;i++){
        printf("%d",elem[i]);
    }
    printf("]");

}

int main(){
    Pila p=crearPila(); //creacion de pila
    printf("%d",pop(p.elem,&p.tope));
    imprimePila(p.elem,&p.tope); //se muestra la pila vacia

    //introducimos datos

    push(p.elem,&p.tope,50);
    push(p.elem,&p.tope,60);
    push(p.elem,&p.tope,70);

    imprimePila(p.elem,&p.tope);    //muestra la pila con datos

    //Expulsadno datos

    printf("El dato obtenido es %d",pop(p.elem,&p.tope));
    imprimePila(p.elem,&p.tope);

    printf("El dato obtenido es %d",pop(p.elem,&p.tope));
    imprimePila(p.elem,&p.tope);

    printf("El dato obtenido es %d",pop(p.elem,&p.tope));
    imprimePila(p.elem,&p.tope);

    printf("%d",pop(p.elem,&p.tope));

}
