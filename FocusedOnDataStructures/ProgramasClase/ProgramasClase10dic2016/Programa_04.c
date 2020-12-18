/*Arboles*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodo1{
    int x;
    struct nodo1*izq;
    struct nodo1*der;
}nodo;

void error (voi);
nodo*crearnodo(void);


int main(){

    int aux=0;
    nodo*p;  //nnodo pivote
/*
    nodo*raiz;
    raiz=crearnodo();
    raiz->der=NULL;
    raiz->izq=NULL;
    raiz->x=10;

    printf("Ingrese un 5 ");
    scanf("%d",&aux);

    //nodo hoja
    p=crearnodo();
    p->x=aux;
    p->der=NULL;
    p->izq=NULL;

    //preguntar para saber si lo ponemos a la izq o der

    if(p->x<raiz->x)
        raiz->izq=p;
    else if (p->x>raiz->x)
        raiz->der=p;
    else printf("No puedes ingresar ese valor\n");
*/
    //comprobacion
/*    printf("%p\n",raiz);
    printf("%p\n",raiz->der);
    printf("%p\n",raiz->izq);
*/
  nodo*raiz=NULL;
  int j=0;
  j=insertar(10,&raiz);

}

void error(void){
    printf("Error en el malloc\n");
}

nodo*crearnodo(void){

    nodo*q;
    q=(nodo*)malloc(sizeof(nodo));
    if(q!=NULL)
          printf("Exito\n");
    else error();
    return q;
}
int insertar(int d, nodo**raiz){
    nodo*nuevo=NULL;
    nodo*ultimo=NULL;
    nodo*actual=*raiz;
    int nComp=0;

    while(actual!=NULL){
        if((nComp=comparar(d,actual->x))==0){
            printf("El nodo ya existe\n");
            break;
        }else{
            ultimo=actual;
            if(nComp<0)//buscar en el subarbol izq
                actual=actual->izq;
            else
                actual=actual->der;
        }
    }
    if(actual==NULL){
        nuevo=crearnodo();
        nuevo->x=d;
        nuevo->izq=NULL;
        nuevo->der=NULL;

        if(ultimo==NULL)
            *raiz=nuevo;
        else if(nComp<0)
            ultimo->izq=nuevo;
        else
            ultimo->der=nuevo;
        return 0;
    }else
        return 2;
}
int comparar(int x, int y){
    if(x<y)
       return -1;
    else if(x==y)
        return 0;
    else
        return 1;
}
