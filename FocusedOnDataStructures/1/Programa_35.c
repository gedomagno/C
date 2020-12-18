/*Programa que inicializa una lista enlazada con un solo nod*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;						//segmento de datos
	float b;					//segmento de datos
	struct elemento*siguiente;	//apuntador
}dato; 

void error(void);

int main(){
	dato*inicio=NULL;
	dato*fin=NULL;
	dato*p=NULL;

	p=(dato*)malloc(sizeof(dato));	//genero una variable atraves de su apuntador

	if(p!=NULL){	//comprobacion del trabajo de malloc
		printf("\nReservacion exitosa\n");			
		}else error;

	printf("\nPARA INICIAR LA LISTA NECESITO QUE LOS APUNTADORES INICIO Y FIN APUNTEN AL NODO Y QUE ADEMAS P->SIGUIENTE APUNTE A NULL\n");

	printf("\nIniciando mi lista\n");

	p->siguiente=NULL;	
	inicio=p;
	fin=p;

	printf("\nComprobacion:\n");

	printf("inicio apunta a la direccion %p\n",inicio);
	printf("fin apunta a la direccion %p\n",fin);
	printf("p apunta a la direccion %p\n",p);
	printf("p->siguiente %p\n",p->siguiente);

	printf("inicio y fin apuntan a la direccion de p y p->siguiente apunta a nulo, por lo que la inicializacion de la lista es correcta");



return 0;
}

void error(void){
	printf("\nFallo la asignacion de memoria\n");


}


