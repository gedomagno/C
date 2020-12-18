/*Programa que recorre un arreglo inicializado y que imprime sus elementos mediante un apuntador. EL NOMBRE DE UN ARREGLO ES LA DIRECCION DE MEMORIA DEL PRIMER ELEMENTO*/

#include<stdio.h>

int main(){

	int arreglo[]={100,23,6,34,87};
	int i=0;

	for(i=0;i<5;i++){		//primer forma de impresion con notacion de arreglo
		printf("Elemento[%i]:%d\n",i,*(arreglo+i));

}
	printf("\n");

	int*p_arreglo;		//declaramos un apuntador a arreglo
	p_arreglo=arreglo;	//el apuntador apunta al primer elemento del arreglo

	for(i=0;i<5;i++){		//segunda forma de impresion con un apuntador al arreglo
		printf("Elemento[%i]:%d\n",i,*p_arreglo);
		p_arreglo++;

}

return 0;
}
