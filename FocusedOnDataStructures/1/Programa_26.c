/*Programa que pide al usuario el ingreso de los elementos de un arreglo y los imprime, todo mediante un apuntador al arreglo*/

#include<stdio.h>

int main(){
	int arreglo[5];
	int*p_arreglo;	//apuntador a arreglo
	p_arreglo=arreglo;	//apuntador apunta a arreglo
	int i=0;
	int aux=0;	//variable auxiliar para el llenado del arreglo mediante apuntador

	for(i=0;i<5;i++){
		printf("Elemento[%i]: ",i);
		scanf("%d",&aux);	//guardo en auxiliar
		*p_arreglo=aux;		//el contenido de lo apuntado por el apuntador lo igualo a aux
		p_arreglo++;	//avanzo a la siguiente localidad de memoria del arreglo(siguiente elemento)
}

	printf("\n");

	p_arreglo=arreglo;	//REGRESO EL APUNTADOR AL INICIO DEL ARREGLO
	
	for(i=0;i<5;i++){		//impresion del arreglo mediante apuntador
		printf("Elemento[%d]:%d\n",i,*p_arreglo);
		p_arreglo++;
}

return 0;
}
