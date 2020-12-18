/*Programa que manda un arreglo de enteros a una funcion que retorna un apuntador*/

#include<stdio.h>

int *funcion(int arreglo[]);	//funcion que recibe un arreglo como parametro y regresa un apuntador

int main(){
	int arreglo[]={10,20,43,12,654};
	int* p_arreglo;
	p_arreglo=arreglo;  //apuntador al arreglo
	int i=0;
	
	for(i=0;i<5;i++){	//imprimo el arreglo
		printf("Elemento[%d]:%d\n",i,*p_arreglo);
		p_arreglo++;
}	
	p_arreglo=arreglo;	//regreso el puntero al inicio del arreglo

	printf("\nllamando a la funcion\n");

	p_arreglo=funcion(arreglo);	//llamo a la funcion 

	//imprimimos nuevamente el arreglo
	for(i=0;i<5;i++){
		printf("Elemento[%d]:%d\n",i,*p_arreglo);
		p_arreglo++;
}	
	//vemos que el arreglo fue modificado por la funcion
return 0;
}

int*funcion(int arreglo[]){		//funcion que regresa un apuntador
	int*AppArreglo;
	AppArreglo=arreglo;
	int i=0;
	
	for(i=0;i<5;i++){	//a todos los elementos del arreglo los hago 1S
		*AppArreglo=1;
		AppArreglo++;
}
	AppArreglo=arreglo;

return AppArreglo;
}


