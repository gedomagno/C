/*Programa que genera 3 nodos uno manual, 2 mediante funcion se cuentan mediante una funcion y se llenan los miembros de los nodos mediante un for.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato;	

void error(void);
dato*nuevoNodo(void);
int contarNodos(dato*);
void llenarNodos(int, dato*);	//funcion que recibe el tamano de la lista y el apuntador desde donde debe empezar a llenar los nodos
void imprimirNodos(int, dato*);	//recibe el tamano de la lista y el apuntador desde donde debe empezar a imprimir

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
	
	//tercer nodo mediante funcion

	p=nuevoNodo();
	p->siguiente=NULL;
	fin->siguiente=p,
	fin=p;

	printf("Mi lista empieza en %p y termina en %p\n",inicio,fin);

	//contar nodos mediante una funcion
	int tamano=0;
	tamano=contarNodos(inicio);
	printf("\nLa lista tiene %d nodos\n", tamano);

	//llenado de nodos mediante una funcion que ocupe un for y el tamaño de la lista

	llenarNodos(tamano,inicio);
	
	//impresion de nodos mediante una funcion que usa el tamaño de la lista y un for

	imprimirNodos(tamano,inicio);
return 0;
}

void error(void){
	printf("Error en la reservacion\n");
}

dato*nuevoNodo(){
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

void llenarNodos(int tamano, dato*inicio){
	dato*aux=NULL;
	aux=inicio;	//hago que mi auxiliar apunte a donde apunta inicio
	int i=0;
		for(i=0;i<tamano;i++){
			aux->a=1;
			aux->b=2.1;		
			aux=aux->siguiente;
		}
}

void imprimirNodos(int tamano, dato*inicio){
	dato*aux=NULL;
	aux=inicio;
	int i=0;
	
	for(i=0;i<tamano;i++){
		printf("a->siguiente=%d\n",aux->a);
		printf("b->siguiente=%.2f\n",aux->b);
		aux=aux->siguiente;
	}

}

