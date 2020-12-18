/*Programa en donde genero 3 nodos dos de forma manual y uno mediante funcion, los cuento y los lleno*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento {
	int a;
	float b;
	struct elemento*siguiente;
}dato;

void error(void);	
dato*nuevoNodo(void);
int contarNodos(dato*);

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
	
	printf("Comprobacion del primer nodo\n");
	printf("dir que guarda p %p\n",p);
	printf("dir que guarda inicio %p\n", inicio);
	printf("dir que guarda fin %p\n", fin);
	
	//segundo nodo de forma manual

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL)
		printf("Reservacion exitosa\n");
	else error();
	
	p->siguiente=NULL;
	inicio->siguiente=p;
	fin=p;

	printf("Comprobacion del segundo nodo\n");
	printf("dir que guarda p %p\n",p);
	printf("dir que guarda inicio->siguiente %p\n", inicio->siguiente);
	printf("dir que guarda fin %p\n", fin);

	//tercer nodo mediante una funcion

	p=nuevoNodo();
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	printf("Comprobacion del tercer nodo\n");
	printf("dir que guarda p %p\n",p);
	printf("dir que guarda fin %p\n", fin);
	//aqui ya no imprimo fin->siguiente porque ya movi el apuntador al tercer nodo

/*	//cuarto nodo mediante una funcion

	p=nuevoNodo();
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;	
*/

	//llenado de mis nodos mediante un apuntador auxiliar

	dato*aux=inicio;	//hago que mi apuntador aux apunte al mismo lugar que apunta inicio
	while(aux!=NULL){
		aux->a=1;
		aux->b=0.0;
		aux=aux->siguiente;
}
	printf("Despues de llenar los miembros de mis nodos los imprimo\n");

	aux=inicio;

	while(aux!=NULL){
		printf("a=%d\n",aux->a);
		printf("b=%.2f\n",aux->b);
		aux=aux->siguiente;
}
	//contamos cuantos nodos tiene la lista

	int cuenta=0;
	cuenta=contarNodos(inicio);

	printf("La lista tiene %d nodos\n",cuenta);

return 0;
}

void error(void){
	printf("Reservacion fallida\n");
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

