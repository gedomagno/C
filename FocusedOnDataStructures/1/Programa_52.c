/* Programa que genera 4 nodos uno manual y 3 mediante funcion, se cuentan los nodos, se llenan los nodos y se imprimen los miembros de los nodos todo mediante funciones */

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato;

void error(void);
dato* nuevoNodo(void);
int contarNodos(dato*);
void llenarNodos(dato*);
void imprimirNodos(dato*);		

int main(){
	dato*inicio=NULL;
	dato*fin=NULL;
	dato*p=NULL;
	
	//primer nodo manual

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL)
		printf("Reservacion exitosa\n");
	else error();

	p->siguiente=NULL;
	inicio=p;
	fin=p;

	//segundo nodo mediante funcion

	p=nuevoNodo();
	p->siguiente=NULL;
	inicio->siguiente=p;
	fin=p;

	//	tercer nodo mediante funcion

	p=nuevoNodo();
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	//cuarto nodo mediante funcion

	p=nuevoNodo();
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	//contamos los nodos de la lista	

	printf("\nContando los nodos\n");
	int cuenta=0;
	cuenta=contarNodos(inicio);
	printf("Mi lista tiene %d nodos\n",cuenta);

	//llenamos los nodos de la lista

	printf("\nLlenando los nodos\n");
	llenarNodos(inicio);

	//imprimimos los miembros de los nodos de la lista

	printf("\nImprimiendo los nodos\n");
	imprimirNodos(inicio);
	
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

int contarNodos(dato*inicio){
	dato*aux=NULL;
	aux=inicio;
	int t=0;
	while(aux!=NULL){
		t++;
		aux=aux->siguiente;
	}
	
	return t;
}

void llenarNodos(dato*inicio){
	dato*aux=NULL;
	aux=inicio;
	
	while(aux!=NULL){
		aux->a=1;
		aux->b=3.14;
		aux=aux->siguiente;
	}
}

void imprimirNodos(dato*inicio){
	dato*aux=NULL;
	aux=inicio;
	while(aux!=NULL){
		printf("a->siguiente =%d\n",aux->a);
		printf("b->siguiente =%.2f\n",aux->b);
		aux=aux->siguiente;
	}
}


































