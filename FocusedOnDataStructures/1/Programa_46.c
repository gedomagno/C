/*Programa que genera 3 nodos, dos de manera manual y uno mediante una funcion. Se analizan los miembros siguientes de cada estructura y se determina que los apuntadores solo apuntan a una direccion de memoria donde hay una estructura. CABE ACLARAR QUE UN APUNTADOR A ESTRUCTURA NO TIENE MIEMBROS SINO QUE SOLO ES UNA FLECHA QUE APUNTA A UN PEDAZO DE MEMORIA DONDE HAY UNA ESTRUCTURA QUE SI TIENE MIEMBROS.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato; 


void error (void);	//funcion error
dato*nuevoNodo(void);	//funcion para generar nuevo nodo

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

	//comprobacion del primer nodo
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

	//comprobacion 

	printf("dir que guarda p %p\n",p);
	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda inicio->siguiente %p\n",inicio->siguiente);
	printf("dir que guarda fin %p\n",fin);
	printf("dir que guarda p->siguiente %p\n",p->siguiente);

	//tercer nodo mediante funcion 
	
	p=nuevoNodo();

	p->siguiente=NULL;
	printf("dir a la que apunta p %p\n",p);		
	fin->siguiente=p;
	printf("dir a la que apunta fin->siguiente %p\n",fin->siguiente);	//aqui si me convenzo de que he enlazado mi segundo nodo con el tercero
	fin=p;	//aqui muevo mi puntero fin al ultimo nodo que he generado (tercer nodo). Es decir la flecha (apuntador) ya apunta a otra direccion de memoria con otros miembros diferentes (nodo tres) a los anteriormente apuntados (nodo dos)
	printf("dir a la que ahora apunta p %p\n",p);	
	printf("dir a la que apunta ahora p->siguiente %p\n",p->siguiente);	//Como es de esperarse el nuevo p->siguiente es el miembro del tercer nodo, el cual yo asigne a nulo. Ya no es posible que tenga el valor del nodo 2 porque la flecha fin ya la movi para que apuntara a otro segmento de memoria correspondiente a otra estructura (nodo 3)
	printf("dir a la que apunta fin->siguiente %p\n",fin->siguiente);	//Este fin->siguiente apunta a donde se le da la gana porque la flecha siguiente ya apunta a otro segmento de memoria correspondiente a otra estructura.

	//comprobaion del tercer nodo
/*
	printf("dir a la que apunta p %p\n",p);
	printf("dir a la que apunta inicio %p\n",inicio);
	printf("dir a la que apunta inicio->siguiente %p\n",inicio->siguiente);
	printf("dir a la que apunta fin->siguiente %p\n",fin->siguiente);
	printf("dir a la que apunta p->siguiente %p\n",p->siguiente);
	printf("dir a la que apunta fin %p\n",fin);
	printf("dir a la que apunta fin->siguiente %p\n",fin->siguiente);
*/

return 0;
}

void error (void){
	printf("Reservacion erronea\n");
}

dato*nuevoNodo(void){
	dato*aux;
	aux=(dato*)malloc(sizeof(dato));
	if(aux!=NULL)
		printf("Reservacion exitosa\n");
	else error();

	return aux;
}






