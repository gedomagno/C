/*Programa que define un arreglo y un apuntador a arreglo. Se van modificando los valores del arreglo y se van observando sus localidades de memoria*/

#include<stdio.h>

int main(){
	int arreglo[5]={10,25,34,53,39};
	int*appArreglo;
	int i=0;

	for (i=0;i<5;i++){	//impresion de arreglo
		printf("Elemento[%i]:%d, DirMemoria: %p\n",i,arreglo[i],&arreglo[i]);
}

	appArreglo=&arreglo[1];	//con el apuntador apunto al segundo elemento

	printf("\n");
	printf("Elemento[0]=%d, DirMemoria[0]=%p\n",*arreglo, arreglo);	//esta linea demuestra que el nombre del arreglo es un apuntador al primer elemento
	
	printf("appArreglo=%p y el valor de lo apuntado %d\n", appArreglo, *appArreglo);

	printf("\nModificando el primer elemento por medio del arreglo\n");

	*arreglo=500;	//modificando el primer elemento del arreglo mediante su nombre
	
	printf("\nModificando el segundo elemento por medio de apuntador\n");	

	*appArreglo=100;	//modificando el segundo elemento del arreglo mediante el apuntador

	for (i=0;i<5;i++){		//impresion de arreglo
		printf("Elemento[%i]:%d, DirMemoria: %p\n",i,arreglo[i],&arreglo[i]);
}
return 0;
}
