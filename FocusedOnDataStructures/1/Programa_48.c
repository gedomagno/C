/*Programa que genera 5 nodos dos manuales y tres mediante una funcion. Ademas cuento el numero de nodos que tiene la lista mediante una funcion*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato;

void error(void);
int contarNodos(dato*);	//funcion para contar nodos de la lista
dato*nuevoNodo(void);	//funcion para generar un nuevo nodo

int main(){
	//apuntadores de referencia
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

	//segundo nodo de forma manual

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL)
		printf("Reservacion exitosa\n");
	else error();

	p->siguiente=NULL;	
	inicio->siguiente=p;
	fin=p;

	//tercer nodo mediante funcion

	p=nuevoNodo();
	
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	//cuarto nodo mediante funcion

	p=nuevoNodo();
	
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	//quinto nodo mediante funcion

	p=nuevoNodo();
	
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;
	
	int cuenta=0;	

	cuenta=contarNodos(inicio);	
	printf("la lista tiene %d nodos\n", cuenta);

	printf("El inicio esta en %p y el final en %p\n", inicio, fin);

return 0;
}

void error(void){
	printf("Error en la reservacion\n");
}

dato*nuevoNodo(void){	//funcion para generar un nuevo nodo
	dato*aux;
	aux=(dato*)malloc(sizeof(dato));
	if(aux!=NULL)
		printf("Reservacion exitosa\n");
	else error();
	
	return aux;
}

int contarNodos(dato*inicio){
	dato*aux;
	aux=inicio;	//hago que mi puntero auxiliar apunte tambien a donde apunta inicio
	int t=0;

	while(aux!=NULL){
		t++;
		aux=aux->siguiente;	//esto lo hago para que aux apunte ahora al siguiente nodo
}
	return t;
}





