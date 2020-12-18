/*Programa que imprime un arreglo mediante su apuntador y ademas las localidades de memoria para ver los saltos del apuntador*/

#include<stdio.h>

int main(){
	int arreglo[]={212,46,7455,3456,236};
	int i=0;

	for(i=0;i<5;i++){
		printf("Elemento[%d]:%d, direccion del elemento[%d]:%p\n",i,*(arreglo+i),i,(arreglo+i));	//notacion de arrglo
		
}

	printf("\n");

	int* p_arreglo;	//apuntador a arreglo
	p_arreglo=arreglo;	//apuntador apunta al primer  elemento del arreglo

	for(i=0;i<5;i++){	//impresion mediante apuntador
		printf("Elemento[%i]:%i, direccionElemento[%i]:%p\n",i,*p_arreglo,i,p_arreglo);
		p_arreglo++;
}


return 0;
}
