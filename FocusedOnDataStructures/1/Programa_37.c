/*Programa que genera una lista ligada de tres nodos de forma manual*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato;


void error(void);
int main(){

	dato*inicio=NULL;
	dato*fin=NULL;
	dato*p=NULL;

	//genero mi primer nodo

	p=(dato*)malloc(sizeof(dato));

	if(p!=NULL)	//comprobacion de malloc
		printf("Reservacion exitosa\n");
	else error();

	p->siguiente=NULL;	//apunto mis apuntadores al primer nodo
	inicio=p;
	fin=p;

	//genero segundo nodo

	p=(dato*)malloc(sizeof(dato));

	if(p!=NULL)	//comprobacion de malloc
		printf("Reservacion exitosa\n");
	else error();

	p->siguiente=NULL;	//apunto mis apuntadores al segundo nodo
	inicio->siguiente=p;
	fin=p;

	//genero mi tercer nodo

	p=(dato*)malloc(sizeof(dato));

	if(p!=NULL)	//comprobacion de malloc
		printf("Reservacion exitosa\n");
	else error();
	
	p->siguiente=NULL;	//apunto mis apuntadores al tercer nodo
	fin->siguiente=p;
	fin=p;

	printf("\nComprobacion:\n");

	printf("Dir a donde apunta inicio %p\n",inicio);
	printf("Dir a donde apunta inicio->siguiente %p\n",inicio->siguiente);
	printf("Dir a donde apunta fin %p\n",fin);
	printf("Dir a donde apunta fin->siguiente %p\n",fin->siguiente);



return 0;
}

void error(void){
	printf("Fallo la asignacion\n");

}

