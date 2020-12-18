/*Programa que genera dos nodos de una lista de forma manual y dos mas mediante una funcion*/

#include<stdlib.h>
#include<stdio.h>

typedef struct elemento{
	int a;	
	float b;
	struct elemento*siguiente;
}dato;

void error(void);
dato* nuevonodo(void);

int main(){
	dato*inicio;
	dato*fin;
	dato*p;

	//primer nodo

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL)
		printf("Reservacion exitosa\n");	
	else error();

	p->siguiente=NULL;
	inicio=p;
	fin=p;
	
	printf("Comprobacion del primer nodo\n");
	printf("dir que guarda p %p\n",p);
	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda fin %p\n",fin);
	printf("dir que guarda p->siguiente %p\n",p->siguiente);

	//segundo nodo de forma manual
	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL)
		printf("Reservacion exitosa\n");
	else error();

	p->siguiente=NULL;
	inicio->siguiente=p;
	fin=p;

	printf("comprobacion del segundo nodo\n");
	printf("dir que guarda p %p\n",p);
	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda inicio->siguiente %p\n",inicio->siguiente);
	printf("dir que guarda fin %p\n",fin);

	//tercer nodo mediante una funcion 

	p=nuevonodo();

	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;	

	printf("comprobacion del tercer nodo\n");
	printf("dir que guarda p %p\n",p);
	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda fin->siguiente %p\n",fin->siguiente);
	printf("dir que guarda fin %p\n",fin);

	//cuarto nodo mediante funcion

	p=nuevonodo();

	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;	

	printf("comprobacion del cuarto nodo\n");
	printf("dir que guarda p %p\n",p);
	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda fin->siguiente %p\n",fin->siguiente);
	printf("dir que guarda fin %p\n",fin);

return 0;
}

void error(void){
	printf("Error en la reservacion\n");
}

dato* nuevonodo(void){
	dato*aux;
	aux=(dato*)malloc(sizeof(dato));
return aux;
}

