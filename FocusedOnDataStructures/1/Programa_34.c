/*Programa que modifica los miembros de una estructura de la cual no conozco su nombre pero si su apuntador. Imprimo ademas sus direcciones*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{	//estructura autoreferenciada
	int a;
	float b;
	struct elemento*siguiente;	//apuntador que guarda una direccion del tipo de dato estruc elemento
}dato;

void error(void);	//funcion para validar la reservacion de la memoria mediante malloc

int main(){
//NO DECALRO EXPRESAMENTE NINGUNA VARIABLE DEL TIPO STRUCT ELEMENTO, PERO SI UN APUNTADOR

	dato*inicio=NULL;;
	dato*fin=NULL;
	dato*p=NULL;

	p=(dato*)malloc(sizeof(dato));	//p apunta a la direccion de memoria de alguna variable desconocida del tipo struct dato
	
	if(p!=NULL){
		printf("\nexito en la reservacion de memoria\n");
	}else error();

	p->a=20;	//asigno valores a mi variable "DESCONOCIDA" mediante un apuntador
	p->b=1.1;

	printf("p->a=%d\n",p->a);
	printf("p->b=%.2f\n",p->b);
	printf("p->siguiente=%p\n",p->siguiente);	//al parecer p->siguiente apunta a NULL
		
	//imprimiendo las direcciones y los contenidos de los tres apuntadores del tipo dato

	printf("Direccion del apuntador inicio=%p, contenido= %p\n",&inicio,inicio);
	printf("Direccion del apuntador fin=%p, contenido= %p\n",&fin,fin);
	printf("Direccion del apuntador p=%p, contenido= %p\n",&p,p);

return 0;
}

void error (void){
	printf("La reservacion de memoria fallo");

}
