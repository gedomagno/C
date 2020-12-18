/*Programa que usa una lista ligada simple*/

#include<stdio.h>

//typedef int Entero;      Acordeon de como usar el typedef

typedef struct elemento{
    int a;
    float b;
    struct Elemento* siguiente;

}dato;

void error (void);
dato* nuevonodo(void);  //funcion para ingresar un nuevo nodo
int tamano(dato*q);     //funcion para contar los nodos de la lista
void llenar(int tam,dato*inicio); //llenado de los elementos de n nodos
void imprimir(dato*inicio); //imprimir nodos de la lista
void insertarinicio(dato **inicio);//funcion para insertar al inicio(a la izquierda de un nodo)

int main(){
    dato*inicio=NULL;
    dato*fin=NULL;
    dato*p=NULL;    //pivote

    p=(dato*)malloc(sizeof(dato));

    if(p!=NULL){     //validando que se haya hecho la asignacion
        printf("Se asigno la memoria %p\n\n",p);
    }else
        error();    //llamo a la funcion error

    p->a=40;    //mediante apuntadores modificio una variable que no me importa como se llama, solo se donde vive
    p->b=0.6;

    printf("Contenido de p->a: %d\n",p->a);
    printf("Contenido de p->b: %f\n",p->b);
    printf("Contenido de p->siguiente: %p\n",p->siguiente);

    p->siguiente=NULL;  //ingresando el elemento a la lista
    inicio=p;
    fin=p;

    printf("\nprimer nodo\n");

    printf("Contenido de p->siguiente: %p\n",p->siguiente);
    printf("Contenido de inicio: %p\n",inicio);
    printf("Contenido de fin: %p\n",fin);

    printf("Direccion de p->siguiente: %p\n",&p->siguiente);
    printf("Direccion de inicio: %p\n",&inicio);
    printf("Direccion de fin :%p\n",&fin);

    //segundo nodo

    p=(dato*)malloc(sizeof(dato));

    if(p!=NULL){
        printf("Se reservo la memmoria %p",p);
    }else
        error();

    p->siguiente=NULL;
    inicio->siguiente=p;
    fin=p;

    printf("\nsegundo nodo\n");

    printf("Contenido de p->siguiente: %p\n",p->siguiente);
    printf("Contenido de inicio: %p\n",inicio);
    printf("Contenido defin: %p\n",fin);

    printf("Direccion de p->siguiente: %p\n",&p->siguiente);
    printf("Direccion de inicio: %p\n",&inicio);
    printf("Direccion de fin: %p\n",&fin);

    //tercer nodo por medio de una funcion

    p=nuevonodo();

    p->siguiente=NULL;
    fin->siguiente=p;
    fin=p;

    printf("\ntercer nodo\n");

    printf("p->siguiente: %p\n",p->siguiente);
    printf("inicio: %p\n",inicio);
    printf("fin: %p\n",fin);

    printf("Direccion de p->siguiente: %p\n",&p->siguiente);
    printf("Direccion de inicio: %p\n",&inicio);
    printf("Direccion de fin: %p\n",&fin);

    //cuarto nodo

    p=nuevonodo();

    p->siguiente=NULL;
    fin->siguiente=p;
    fin=p;

    printf("\ncuarto nodo\n");

    printf("Contenido de p->siguiente: %p\n",p->siguiente);
    printf("Contenido de inicio: %p\n",inicio);
    printf("Contenido de fin: %p\n",fin);

    printf("Direccion de p->siguiente: %p\n",&p->siguiente);
    printf("Direccion de inicio: %p\n",&inicio);
    printf("Direccion de fin: %p\n",&fin);

    //llenado de elementos de los nodos

    printf("\n");
    p=inicio;

    int i=0;
    for(i=0;i<4;i++){
        p->a=i;
        p->b=3.14;
        p++;
    }

    //impresion de elementos de los nodos

    printf("\n");
    p=inicio;

    for(i=0;i<4;i++){
        printf("%d\n",p->a);
        printf("%f\n",p->b);
        p++;
    }

    //contar los elementos de la lista

    int tam=0;

    tam=tamano(inicio);
    printf("\ncantidad de nodos es: %d\n",tam);

    llenar(tam, inicio);    //llenado de los nodos empezando con a=1, ..., y b=3.14

    //impresion de nodos

    printf("\n");
    p=inicio;

    for(i=0;i<tam;i++){
        printf("%d\n",p->a);
        printf("%f\n",p->b);
        p=p->siguiente;
    }

    //impresion de nodos mediante la funcion

  //  imprimir(inicio); CHECAR!!!!

//void borrarLista(dato*inicio);

  //ingreso de un nodo a la izquierda del primer nodo

  p=nuevonodo();
  p->siguiente=inicio;
  inicio=p;

  //para comprobar ejecuto nuevamente la funcion llenado y luego tamaño para ver los cambios

    tam=tamano(inicio);
    printf("\ncantidad de nodos es: %d\n",tam);

//    void llenar(int tam,dato*inicio); //llenado de los elementos de n nodos

    //ingresamos un nodo a la izquierda del primer nodo mediante funcion

    insertarinicio(&inicio);

    //verificamos el nunmero de nodos de la lista

    tam=tamano(inicio);
    printf("\ncantidad de nodos es: %d\n",tam);


return 0;
}

void error (void){
    printf("Error\n");
}

dato* nuevonodo(void){
        dato*aux;
        aux=(dato*)malloc(sizeof(dato));
        if (!aux)
            error();
        return (aux);
}

int tamano(dato*q){
    dato*aux=q;
    int t=0;
    while(aux!=NULL){
        t++;
        aux=aux->siguiente;
    }return t;
  }

void llenar(int tam,dato*inicio){ //llenado de los elementos de n nodos

    dato*p=inicio;
    int i=0;
    for(i=0;i<tam;i++){
        p->a=i;
        p->b=3.14;
        p=p->siguiente;
    }
}
/*Checar esta funcion*/
/*
void imprimir(dato*inicio){ //impresion de los nodos de la lista
    dato*aux=q;
    int t=0;
    while(aux!=NULL){
        printf("%d",);
        printf("%d",);
        aux=aux->siguiente;
    }return t;
}
*/

void borrarLista(dato*inicio){  //borrado de toda la lista
    dato*aux=inicio;
    while(inicio!=NULL){
        aux=inicio->siguiente;
        free(inicio);
        inicio=aux;
    }
}

void insertarinicio(dato **inicio){//funcion para insertar al inicio(a la izquierda de un nodo)
    dato*p=*inicio;
    dato*q=nuevonodo();
    q->a=3;
    q->b=60;
    q->siguiente=p;
    p=q;
    *inicio=q;
}

