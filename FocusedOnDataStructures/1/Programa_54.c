/*Programa que genera una lista de 3 nodos (uno manual y dos mediante funcion) se cuentan los nodos de la lista, despues se borran los nodos y se vuelve a contar la lista.*/

#include<stdio.h>
#include<stdlib.h>	

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato;

void error(void);	
dato*nuevoNodo(void);
int contarNodos(dato*);
void borrarLista(dato*);	//funcion para borrar una lista completa

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
	
	printf("inicio guarda la direccion %p\n",inicio);
	//segundo nodo mediante funcion

	p=nuevoNodo();
	p->siguiente=NULL;
	inicio->siguiente=p;
	printf("inicio->siguiente guarda la direccion %p\n",inicio->siguiente);
	fin=p;

	//tercer nodo mediante funcion

	p=nuevoNodo();
	p->siguiente=NULL;
	fin->siguiente=p;
	fin=p;
	
	printf("fin guarda la direccion %p\n",fin);

	//contamos los nodos de la lista

	int tamano=0;
	tamano=contarNodos(inicio);
	
	printf("\nLa lista tiene %d nodos\n",tamano);

	//borrar nodos de la lista

	borrarLista(inicio);
	
	printf("\nUna vez borrada la lista\n");
	printf("dir que guarda inicio ahora %p\n",inicio);
	printf("dir que guarda inicio->siguiente %p\n",inicio->siguiente);
	printf("dir que guarda fin %p\n",fin);

return 0;
}

void error(void){
	printf("La reservacion fallo\n");
}

dato*nuevoNodo(void){	//funcion para generar nodos
	dato*aux=NULL;
	aux=(dato*)malloc(sizeof(dato));
	if(aux!=NULL)
		printf("Reservacion exitosa\n");
	else error();

	return aux;
}

int contarNodos(dato*inicio){	//funcion para contar nodos
	dato*aux=NULL;
	aux=inicio;
	int t=0;	

	while(aux!=NULL){
		t++;
		aux=aux->siguiente;
	}
	return t;
}

void borrarLista(dato*inicio){	//funcion para borrar todos los nodos de la lista
	dato*aux=NULL;
	aux=inicio;
	
	while(inicio!=NULL){
		inicio=inicio->siguiente;	//hago que inicio se pase al siguiente nodo antes de borrar el primero mediante aux		
		free(aux);	//borro el espacio de memoria apuntado por aux(el cual apunta al mismo lado que apunta inicio)
		aux=inicio;	 //una vez borrado el nodo vuelvo a mover aux a donde apunta inicio que para este caso es al espacio de memoria del segundo nodo.
	}
}







