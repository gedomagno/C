/*Programa que genera dos nodos en una lista de manera manual y un tercero mediante una funcion, ademas mediante una funcion se enumeran los nodos de la lista*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato;

void error(void);
dato*nuevonodo(void);
int tamano(dato*);	//funcion para contar los nodos en mi lista


int main(){
	dato*inicio=NULL;
	dato*fin=NULL;
	dato*p=NULL;

	//primer nodo

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL)			//comprobacion de malloc
		printf("Reservacion exitosa\n");
	else error();

	p->siguiente=NULL;
	inicio=p,
	fin=p;
	//comprobacion primer nodo

	printf("dir que guarda p %p\n",p);
	printf("dir que guarda p->siguiente %p\n",p->siguiente);
	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda fin %p\n",fin);

	//segundo nodo

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL)
		printf("Reservacion exitosa\n");
	else error();

	p->siguiente=NULL;
	inicio->siguiente=p;
	fin=p;	

	printf("dir que guarda p %p\n",p);
	printf("dir que guarda p->siguiente %p\n",p->siguiente);
	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda inicio->siguiente %p\n",inicio->siguiente);
	printf("dir que guarda fin %p\n",fin);

	//tercer nodo mediante funcion

	p=nuevonodo();
	
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	printf("dir que guarda p %p\n",p);
	printf("dir que guarda p->siguiente %p\n",p->siguiente);
	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda inicio->siguiente %p\n",inicio->siguiente);
	printf("dir que guarda fin %p\n",fin);

	//contar nodos mediante la funcion tamano. Para ello, le paso la direccion a la que apunta inicio(que es donde inicia la lista)

	int numnodos=0;
	numnodos=tamano(inicio);
	printf("\nMi lista tiene %d nodos\n", numnodos);

return 0;
}

void error(void){
	printf("Error en la reservacion\n");
}

dato*nuevonodo(void){
	dato*aux;
	aux=(dato*)malloc(sizeof(dato));
	if(aux!=NULL)
		printf("Reservacion exitosa\n");
	else error();

	return aux;

}

int tamano(dato*inicio){	//funcion para contar los nodos en mi lista
	
	dato*aux=inicio;	//al apuntador auxiliar le paso la direccion a la que apunta inicio	
	int contador=0;
	while (aux!=NULL){
		contador++;
		aux=aux->siguiente;
	}	

return contador;
}
