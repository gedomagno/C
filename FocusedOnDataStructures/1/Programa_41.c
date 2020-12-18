/*Programa que genera 3 nodos de una lista de forma manual*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;

}dato;

void error (void);

int main(){
	dato*inicio;
	dato*fin;
	dato*p;

	//primer nodo de forma manual

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL){
		printf("Reservacion exitosa\n");
	}else error();
	
	p->siguiente=NULL;
	inicio=p;	
	fin=p;

	//comprobacion de nodos
	printf("\nComprobacion de primer nodo\n");
	printf("dir que guarda p %p\n",p);
	printf("dir que guarda p->siguiente %p\n",p->siguiente);
	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda fin %p\n",fin);

	
	//segundo nodo de forma manual

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL){
		printf("Reservacion exitosa\n");
	}else error();
	
	p->siguiente=NULL;
	inicio->siguiente=p;
	fin=p;
	
	//comprobacion de nodos
	printf("\nComprobacion de segundo nodo\n");
	printf("dir que guarda p %p\n",p);
	printf("dir que guarda p->siguiente %p\n",p->siguiente);
	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda inicio->siguiente %p\n",inicio->siguiente);
	printf("dir que guarda fin %p\n",fin);

	//tercer nodo de forma manual

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL){
		printf("Reservacion exitosa\n");
	}else error();

	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	//comprobacion de nodos
	printf("\nComprobacion del tercer nodo\n");
	printf("dir que guarda p %p\n",p);
	printf("dir que guarda p->siguiente %p\n",p->siguiente);
	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda inicio->siguiente %p\n",inicio->siguiente);
	printf("dir que guarda fin de siguiente %p\n",fin->siguiente);	//al parecer al haacer fin=p tambien hago que fin->siguiente apunte a lo que apunta p que en este caso es null
	printf("dir que guarda fin %p\n",fin);

return 0;
}

void error(void){
	printf("Error en la reservacion\n");
}
