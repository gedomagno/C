/*Programa que genera una lista ligada con dos nodos. Los nodos se generan de forma manual*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;	//estructura autorefrenciada

}dato;

void error(void);


int main(){

	dato*inicio=NULL;//apuntador de inicio
	dato*fin=NULL;	//apuntador de fin
	dato*p=NULL;	//apuntador de pivote

	p=(dato*)malloc(sizeof(dato));	//genero el primer nodo

	if(p!=NULL)
		printf("Exitosa reservacion\n");
	else error;

	//PRIMER NODO

	p->siguiente=NULL;		//hago que los apuntadores apunten al nodo
	inicio=p;
	fin=p;
	p->siguiente=NULL;
	
	printf("\nComprobacion\n");

	printf("Dir a donde apunta inicio %p\n",inicio);
	printf("Dir a donde apunta fin %p\n",fin);
	printf("Dir a donde apunta p->siguiente %p\n",p->siguiente);
	
	//SEGUNDO NODO. Utilizo nuevamente a p porque inicio y fin ya estan apuntando a el 

	p=(dato*)malloc(sizeof(dato));

	if(p!=NULL)	//comprobacion
		printf("Exitosa reservacion\n");
	else error;

	p->siguiente=NULL;	//ya estoy en el nuevo nodo
	inicio->siguiente=p;	//el apuntador siguiente del inicio apunta al nuevo nodo
	fin=p;			//final de la lista

	printf("\nComprobacion\n");	

	printf("Dir a donde ahora apunta p, segundo nodo de la lista: %p\n",p);	//otro pedazo de memoria donde hay una variable del tipo dato
	printf("p->siguiente %p\n",p->siguiente);	//debe apuntar a nulo por ser el final de la lista
	printf("Dir a donde apunta el miembro inicio->siguiente %p\n",inicio->siguiente);	//debe apuntar a la misma localidad de memoria que apunta p
	printf("Dir a donde apunta el apuntador fin %p\n",fin);	//debe apuntar a la misma localidad de memoria que apunta p
	printf("\nSe comprueba que los apuntadores apuntan a donde deben de apuntar\n");
	
return 0;
}

void error(void){
	printf("Fallo la reservacion de memoria\n");
	
}
