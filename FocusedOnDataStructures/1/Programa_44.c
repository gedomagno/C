/*Programa que genera 6 nodos, dos de manera manual y 4 mediante una funcion, son contados ademas mediante una funcion*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;	
	float b;
	struct elemento*siguiente;
}dato; 

void error(void);
dato* nuevonodo(void);
int contarnodos(dato*);	//funcion para contar nodos, recibe como parametro un apuntador y regresa un entero

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

	//segundo nodo de forma manual

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL)
		printf("Reservacion exitosa\n");
	else error();

	p->siguiente=NULL;
	inicio->siguiente=p;
	fin=p;

	//contamos la cantidad de nodos hasta ahora
	int cuenta=0;
	cuenta=contarnodos(inicio);	//paso la direccion a la que apunta inicio
	printf("\nHasta ahora la lista tiene %d nodos\n",cuenta);
	
	//tercer nodo mediante funcion

	p=nuevonodo();
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	//cuento nuevamente los nodos mediante una funcion
	cuenta=contarnodos(inicio);	//paso la direccion a la que apunta inicio
	printf("\nHasta ahora la lista tiene %d nodos\n",cuenta);

	//cuarto nodo mediante funcion

	p=nuevonodo();
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	//cuento el numero de nodos nuevamente
	cuenta=contarnodos(inicio);
	printf("Hasta ahora mi lista tiene %d nodos\n",cuenta);	

	//quinto nodo mediante funcion

	p=nuevonodo();
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;

	//cuento los nodos
	cuenta=contarnodos(inicio);
	printf("Mi lista tiene %d nodos\n",cuenta);

	//sexto nodo mediante funcion

	p=nuevonodo();
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;
	
	//cuento los nodos

	cuenta=contarnodos(inicio);
	printf("Mi lista tiene %d nodos, el inicio esta en %p y el fin en %p\n",cuenta,inicio,fin);
	

return 0;
}	

void error(void){
	printf("Error en la reservacion\n");
}

dato* nuevonodo(void){
	dato*aux;
	aux=(dato*)malloc(sizeof(dato));
	if(aux!=NULL){
		printf("reservacion exitosa\n");
	}else error();	

	return aux;
}

int contarnodos(dato*inicio){  //con la direccion a la que apunta inicio puedo hacer que mi aux empieze a contar desde ahi
	dato*aux;
	aux=inicio;

	printf("dir que guarda inicio %p\n",inicio);
	printf("dir que guarda aux %p\n", aux);
	
	int t=0;
	while(aux!=NULL){
		t++;
		aux=aux->siguiente;
}
	return t;

}

