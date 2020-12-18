
#include<stdio.h>
#include<stdlib.h>

typedef struct nodo1 {
	int n;  //valor del nodo
	struct nodo1 *izq;
	struct nodo1 *der;
}nodo;

 void procesar(nodo*);
 int comparar(int, int);
 void inorden(nodo*);
 nodo*nuevoNodo();
 int insertar (int, nodo**);
 void preorden(nodo*raiz);
 void postorden(nodo*raiz);
 void error (void);
 int buscar (int datos, nodo*raiz);


 int main(){

    nodo*raiz=NULL;
    insertar(10,&raiz);
    procesar(raiz);
    insertar (8,&raiz);
    procesar(raiz->izq);
    insertar (5,&raiz);
    procesar(raiz->izq->izq);

    printf("\n");
    inorden(raiz);  //de menor a mayor
    preorden(raiz); //primero yo luego los izquierdos luego los derechos

    printf("\nBuscando un nodo en especifico\n");
    int m=0,n=0 ;
    printf("Ingrese un valor: ");
    scanf("%d", &m);
    n=buscar(m, raiz);

    printf("El valor encontrado en los nodos fue %d", m);

    //borrar el nodo mediante la funcion borrar y luego hacer un postorden o preorden



 return 0;
 }


void procesar(nodo*p){  //sirve para imprimir el nodo en donde estoy parado
    nodo*aux=p;
    printf("el valor del nodo es %d\n",aux->n);

}

int comparar (int x, int y){
	if (x < y)
		return -1; //-1 si el nuevo es menor
	else if (x == y)
		return 0;	//0 si son iguales
	else
		return 1;	//1 si son mayores
}

//inorden: funcion recursiva que recorre un arbol binario utilizando la forma

void inorden(nodo*raiz){
    //la funcion recursiva inorden visita los nodos del arbol utilizando la forma inorde; esto es primero visita el subarbol izq despues visita el subarbol derecho
    nodo*actual =raiz;
    if(actual!=NULL){
        inorden(actual->izq); //visita el arbol izquierdo
        //procesar los datos del nodo visitado
        procesar(actual);
        inorden(actual->der);
    }
}
nodo *nuevoNodo(){
	nodo *q = (nodo *)malloc(sizeof(nodo));
	if (!q) error();
	return q;
}
int insertar (int d, nodo **raiz){
	//la función insertar permite añadir un nodo que aun no esta en el árbol
	nodo *nuevo = NULL, *ultimo = NULL, *actual=*raiz;
	int nComp = 0;

	while(actual!=NULL)
	{
		if((nComp = comparar(d, actual->n))==0){
			printf("El nodo ya existe :/ \n\n");
			break;
		}
		else
		{
			ultimo=actual;
			if(nComp < 0) //buscar el en subarbol izquierdo
				actual = actual->izq;
			else
				actual = actual->der;
		}
	}
	if(actual==NULL)
	{
		nuevo = nuevoNodo();
		nuevo->n = d;
		nuevo->izq = NULL;
		nuevo->der=NULL;

		/*El nuevo nodo pasará a ser la raíz del arbol total si
		este esta vacio, del subarbol izquierdo de "ultimo" si la comparación
		fue menor o del subarbol derecho de ultimo si la comparac´n fue mayor */
		if (ultimo==NULL) //arbol vacio
			*raiz = nuevo;
		else if (nComp <0)
			ultimo->izq = nuevo;
		else
			ultimo->der = nuevo;
		return 0;
	}
		else
			return 2;
	}

void preorden(nodo*raiz){
    nodo*actual=raiz;
    if(actual!=NULL){
        procesar(actual);
        preorden(actual->izq);
        preorden(actual->der);
    }

}
void error (void){
    printf("error en la reservacion\n");
}
void postorden(nodo*raiz){
    nodo*actual=raiz;
    if(actual!=NULL){
        preorden(actual->izq);
        preorden(actual->der);
        procesar(actual);
    }
}
int buscar (int datos, nodo*raiz){
    //la funcion buscar permite acceder a un nodo determinado
    nodo*actual=raiz;
    int nComp;
    while(actual!=NULL){
        if((nComp=comparar(datos,actual->n))==0){
        return (actual->n);
        }
        else if(nComp<0){
            actual=actual->izq;
        }
        else
        {
            actual =actual->der;
        }
    }
}

int borrar(int d, nodo **raiz){
	nodo *ultimo = NULL;    //ultimo nodo antes de que quiero
	nodo *actual = *raiz;   //nodo de referencia para el de raiz
	nodo *marcado = NULL;   //nodo que voy a marcar
	nodo *sucesor = NULL;   //nodo sucesor al que quiero borrar
	int AntComp = 0, nComp = 0;
	int aux;

	//busqueda para buscar al nodo con los datos que se quieren borrar
	while(actual!= NULL)
	{
		AntComp = nComp;		//resultado de la comparación anterior
		if((nComp=comparar(d, actual->n))==0)
			break; //ya se encontró el nodo
		else{
			ultimo=actual;
			if(nComp < 0)
				actual = actual->izq;
			else
				actual = actual->der;
		}
	} //fin del bloque while (actual != NULL)
	if(actual != NULL)	//se encontró el nodo y es el que se va a borrar
	{
		marcado = actual;
		if((actual->izq)==NULL && ((actual->der)==NULL))
		//se trata de un nodo hoja, no tiene quien dependa de el
			sucesor = NULL;
		else if (actual->izq == NULL) //nodo terminal del lado izquierdo
			sucesor = actual->der;
		else if (actual->der == NULL)
			sucesor = actual->izq;
		else{	//nodo que tienen hijo derecho e izquierdo
			//puntero al subarbol derecho del nodo a borrar;
			sucesor = actual = actual->der;
			/*Descender al nodo mas a la izquierda en el subarbol
			derecho de est nodo (el de valor mas pequeño) y hacer
			que el subarbol izquierdo del nodo a borrar o sea ahora
			el subarbol izquierdo de este nodo
			*/
			while(actual->izq != NULL)
				actual = actual->izq;
			actual->izq = marcado->izq;
		}
		//eliminar el nodo y rehacer los enlaces
		if(ultimo != NULL){
			if(AntComp < 0)
				ultimo->izq = sucesor;
			else
				ultimo->der = sucesor;
		}
	else
		*raiz = sucesor;
		aux = marcado->n;
		free(marcado);
		return aux;

	}
	else{
		printf("El nodo que buscas no se encuentra en la estructura");
		return NULL;

	}
	}



