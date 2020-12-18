/*Programa que genera 4 nodos, uno manual y tres mediante funcion. Se llenan los nodos mediante una funcion y se imprimen mediante otra funcion. Las funciones de llenado e impresion son mediante un while y un apuntador auxiliar*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento {
	int a;
	float b;
	struct elemento*siguiente;
}dato; 

void error(void);
dato*nuevoNodo(void);
void llenarNodos(dato*);
void impresionNodos(dato*);

int main(){
	dato*inicio=NULL;
	dato*fin=NULL;
	dato*p=NULL;
	
	//primer nodo de forma manual

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL)
		printf("Reservacion exitosa\n");
	else error();
	
	p->siguiente=NULL;
	inicio=p;
	fin=p;

	//segundo nodo mediante una funcion
	p=nuevoNodo();
	p->siguiente=NULL;
	inicio->siguiente=p;
	fin=p;

	//tercer nodo mediante una funcion

	p=nuevoNodo();
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	//cuarto nodo mediante una funcion

	p=nuevoNodo();
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	//llenado de nodos mediante una funcion

	llenarNodos(inicio);

	//impresion de los miembros de las estructuras

	impresionNodos(inicio);
return 0;
}

void error(void){
	printf("Fallo la reservacion\n");

}

dato*nuevoNodo(void){
	dato*aux=NULL;
	aux=(dato*)malloc(sizeof(dato));

	if(aux!=NULL)
		printf("Reservacion exitosa\n");
	else error();

	return aux;

}

void llenarNodos(dato*inicio){	//funcion para llenar los nodos mediante un while usando un apuntador auxiliar
	dato*aux=NULL;	//apuntador auxiliar
	aux=inicio;	//aux apunta al mismo espacio de memoria que apunta inicio
	
	while(aux!=NULL){
		aux->a=1;
		aux->b=3.14;
		aux=aux->siguiente;
}

}

void impresionNodos(dato*inicio){	//impresion de los miembros de los nodos
	dato*aux=NULL;
	aux=inicio;
	
	while(aux!=NULL){
		printf("a=%d\n",aux->a);
		printf("b=%.2f\n",aux->b);
		aux=aux->siguiente;
}

}

