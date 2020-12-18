/*Pila*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodoPila{
    int x;
    struct nodoPila*siguiente;
}pila;

pila* crearnodo();
void error(void);
void push(pila**inicio,int y);

int main(){
    pila*inicio=NULL;
    push(&inicio,80);
    printf("%d\n",inicio->x);
    printf("%p\n",inicio);
    printf("%p\n",inicio->siguiente);
//segundo nodo
    push(&inicio,4);
    printf("%d\n",inicio->x);
    printf("%p\n",inicio);
    printf("%p\n",inicio->siguiente);
//tercer nodo
    push(&inicio,40);
    printf("%d\n",inicio->x);
    printf("%p\n",inicio);
    printf("%p\n",inicio->siguiente);
//cuarto nodo
    push(&inicio,54);
    printf("%d\n",inicio->x);
    printf("%p\n",inicio);
    printf("%p\n",inicio->siguiente);
//quinto nodo

    push(&inicio,69);
    printf("%d\n",inicio->x);
    printf("%p\n",inicio);
    printf("%p\n",inicio->siguiente);

//primer pop

    int m=pop(&inicio);
    printf("Lo que me retorno pop fue %d",m);


return 0;
}





pila* crearnodo(void){
    pila*q;
    q=(pila*)malloc(sizeof(pila));
    if(q!=NULL)
          printf("Exito\n");
    else error();
    return q;
}

void error(void){
    printf("Error\n");
}

void push(pila**inicio,int y){
    pila*p=*inicio; //para tener donde esta inicio y no perderlo
    pila*q;
    q=crearnodo();

    if(p==NULL){ //primer nodo
        q->x=y;
        q->siguiente=NULL;

    *inicio=q;
    }else{      //nodo subsecuente
        q->x=y;
        q->siguiente=p;
    *inicio=q;
    }
}

int pop(pila**inicio)  //pasame una variable que guarde la direccion de un apuntador
{
    pila*aux=*inicio; //aux apunta a lo que inicio apunta
    pila*p=*inicio;
    int j=0;
    if(p==NULL){    //cuando la pila esta vacia
        printf("No hay pila\n");
        j=0;
    }else{
        p=p->siguiente;
        aux->siguiente=NULL;
        j=aux->x;
        free(aux);
        *inicio=p;
    }
    return j;

}




