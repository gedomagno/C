/*Programa que genera una lista con 4 nodos de forma manual*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato;

void error(void);	//funcion de error

int main(){
	dato*inicio=NULL;
	dato*fin=NULL;
	dato*p=NULL;

	//primer nodo
	p=(dato*)malloc(sizeof(dato));		//genero un primer nodo
	if(p!=NULL){
		printf("Reservacion exitosa\n");
	}else error();

	p->siguiente=NULL;	//apunto los apuntadores a primer nodo
	inicio=p;
	fin=p;
	printf("Comprobacion primer nodo\n");
	printf("dir a la que apunta inicio %p\n",inicio);
	printf("dir a la que apunta fin %p\n",fin);
	printf("dir a la que apunta p->siguiente %p\n",p->siguiente);

	//segundo nodo
	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL){	//comprobacion del malloc
		printf("Reservacion exitosa\n");
	}else error();

	p->siguiente=NULL;	//apuntadores apuntan a segundo nodo
	inicio->siguiente=p;
	fin=p;

	printf("Comprobacion segundo nodo\n");
	printf("dir a la que apunta p %p\n",p);
	printf("dir a la que apunta p->siguiente %p\n",p->siguiente);
	printf("dir a la que apunta fin %p\n",fin);
	printf("dir a la que apunta inicio->siguiente %p\n",inicio->siguiente);

	//tercer nodo
	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL){	//comprobacion del malloc
		printf("Reservacion exitosa\n");
	}else error();
	
	p->siguiente=NULL;
	fin->siguiente=p;
	printf("dir a la que apunta p %p\n",p);
	printf("dir a la que apunta fin->siguiente %p\n",fin->siguiente);
	fin=p;	//hago que mi fin apunte a otro espacio de memoria

	printf("Comprobacion tercer nodo\n");
	printf("dir a la que apunta p->siguiente %p\n",p->siguiente);
	printf("dir a la que apunta fin %p\n",fin);
	printf("Debido a que acabo de mover fin a otro espacio de memoria (tercer nodo )ya no puedo acceder al miembro siguiente de donde estaba anteriormente\n");	

	//cuarto nodo

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL){	//comprobacion del malloc
		printf("Reservacion exitosa\n");
	}else error();

	p->siguiente=NULL;
	fin->siguiente=p;
	printf("dir a la que apunta p %p\n",p);
	printf("dir a la que apunta fin de siguiente %p\n",fin->siguiente);
	fin=p;	//hago que mi fin apunte a otro espacio de memoria

	printf("Comprobacion cuarto nodo\n");
	printf("dir a la que apunta p %p\n",p);
	printf("dir a la que apunta p->siguiente %p\n",p->siguiente);
	printf("dir a la que apunta fin %p\n",fin);

	//quinto nodo

	p=(dato*)malloc(sizeof(dato));
	if(p!=NULL){	//comprobacion del malloc
		printf("Reservacion exitosa\n");
	}else error();

	p->siguiente=NULL;
	fin->siguiente=p;
	printf("dir a la que apunta p %p\n",p);
	printf("dir a la que apunta fin->siguiente %p\n",fin->siguiente);
	fin=p;	//hago que mi fin apunte a otro espacio de memoria

	printf("Comprobacion quinto nodo\n");
	printf("dir a la que apunta p %p\n",p);
	printf("dir a la que apunta p->siguiente %p\n",p->siguiente);
	printf("dira a la que apunta fin %p\n",fin);

return 0;
}

void error(void){
	printf("\nAsignacion fallida\n");
}
