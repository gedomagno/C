/*Programa que genera dos nodos de una lista enlazada simple de forma manual y un tercero medianta una funcion*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato;


void error(void);
dato* nuevonodo(void);

int main(){
	dato*inicio=NULL;
	dato*fin=NULL;
	dato*p=NULL;

	//primer nodo

	p=(dato*)malloc(sizeof(dato));
	
	if(p!=NULL){
		printf("Reservacion exitosa\n");
	}else error();

	p->siguiente=NULL;
	inicio=p;
	fin=p;

	//segundo nodo

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL){
		printf("Reservacion exitosa\n");
	}else error();

	p->siguiente=NULL;
	inicio->siguiente=p;
	fin=p;

	//tercer nodo mediante una funcion

	p=nuevonodo();		//genero el nodo nuevo
	p->siguiente=NULL;	//modifico los apuntadores del nuevo nodo	
	fin->siguiente=p;
	fin=p;	


}

void error(void){
	printf("fallo la reservacion\n");
}

dato* nuevonodo(void){
	dato*aux;
	aux=(dato*)malloc(sizeof(dato));
	if(aux!=NULL){
		printf("Reservacion exitosa\n");
	}else error();

return aux;
}


