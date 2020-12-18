/*Programa que pide tres elementos para un arreglo y se modifica el primer elemento mediante la sintaxis de apuntador. Recordad que el nombre de un arreglo es un apuntador al primer elemento*/

#include<stdio.h>

int main(){
	int arreglo[3];
	int i=0, aux;

	for(i=0;i<3;i++){	//llenado del arreglo
		printf("Elemento [%i]: ",i);
		scanf("%d",&arreglo[i]);
		}

	for(i=0;i<3;i++){	//impresion de arreglo
		printf("Elemento[%i]: %d\n",i,arreglo[i]);
}

	printf("ahora ingrese un nuevo valor para el primer elemento: ");
	scanf("%d",&aux);
	
	*arreglo=aux;	//mediante notacion de apuntadores modificamos el arreglo	

	printf("Ahora los valores de los elementos son: \n");
	
	for(i=0;i<3;i++){	//impresion de arreglo
		printf("Elemento[%d]: %d\n",i,arreglo[i]);

}

	printf("CON LO ANTERIOR SE CONSTATA QUE EL NOMBRE DEL ARREGLO ES UN APUNTADOR AL PRIMER ELEMENTO\n");
	
return 0;
}
