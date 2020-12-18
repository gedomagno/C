/*Lista doblemente ligada con funciones */

#include<stdio.h>

typedef struct nodo{
    int a;
    int b;
    struct nodo*siguiente;
    struct nodo*anterior;
}dato;

dato* nuevonodo(int a, float b);
void error (void);
void insertarInicio(dato**inicio, int a, float b);
void insertarFinal(dato**fin,int a,float b );

int main(){
    dato*inicio=NULL;
    dato*fin=NULL;
    dato*p=NULL;

    p=nuevonodo(2,4.8);  //creo la nueva lista
    p->siguiente=NULL;
    p->anterior=NULL;

    inicio=p;
    fin=p;

    /////insertando un nuevo nodo al inicio de la lista
    p=nuevonodo(6,0.26);
    p->anterior=p;
    p->siguiente=inicio;
    inicio=p;
    inicio->anterior=NULL;
    //// impresion a la derecha (llamar a la funcion )

    // ingresar a la derecha otro nodo

    p=nuevonodo(7,7.7);
    fin->siguiente=p;
    p->anterior=fin;
    fin=p;
    fin->siguiente=NULL;

    //insertarInicio

    insertarInicio(&inicio,3,3.3);
}

dato* nuevonodo(int a, float b){    //funcion para crear el nodo e inicializar los miembros
        dato*q;
        q=(dato*)malloc(sizeof(dato));
        if (!q)
            error();
        else{
            q->a;
            q->b;
        }
return q;
}
void error (void){
    printf("Error\n");
}

void imprimirDerecha(dato*inicio){
    dato*q=inicio;
    while(q!=NULL){
        printf("%d,%f",q->a,q->b);
        q=q->siguiente;
    }
}

void imprimirIzquierda(dato*fin){
    dato*q=fin;
    while(q!=NULL){
        printf("%d,%f",q->a,q->b);
        q=q->anterior;
    }
}

void insertarInicio(dato**inicio, int a, float b){
    dato*p=*inicio;
    dato*q=nuevonodo(a,b);
    q->siguiente=p;
    p->anterior=q;
    p=q;
    p->anterior=NULL;
    *inicio=q;
}

void insertarFinal(dato**fin,int a,float b ){
    dato*p=*fin;
    dato*q=nuevonodo(a,b);
    p->siguiente=q;
    p->anterior=p;
    q->siguiente=NULL;
    *fin=q;
}

void insertarMedio(dato*fin, int ps, int a, float b, int t){
    dato*p=fin;
    dato*q=nuevonodo(a,b);
    dato*nodoanterior=NULL;
    dato*nodosiguiente=NULL;

    int i=0;
    for(i=t;i>ps;i--){
        p=p->anterior;
    }
    nodosiguiente=p;
    nodoanterior=p->anterior;
    q->siguiente=nodosiguiente;
    q->anterior=nodoanterior;
    nodosiguiente->anterior;
    nodoanterior->siguiente=q;
}

//void borrarMedio();
