/*Programa que define un apuntador a arreglo y lo recorre mediante aritmetica de apuntadores*/

#include<stdio.h>

int main(){
	int arreglo[5]={0,2,4,73,9};
	int i=0;

	for(i=0;i<5;i++){			//impresion mediante arreglo
		printf("Elemento[%i]:%d\n",i,arreglo[i]);
}

	printf("\nRECORDAR QUE EL NOMBRE DE UN ARREGLO ES UN APUNTADOR A SU PRIMER ELEMENTO. CON BASE EN LO ANTERIOR SE PUEDE RECORRER EL ARREGLO MEDIANTE SU APUNTADOR\n\n");
	
	//recorrido de arreglo mediante apuntador
	
	printf("Elemento[0]:%d\n",*arreglo);
	printf("Elemento[1]:%d\n",*(arreglo+1));
	printf("Elemento[2]:%d\n",*(arreglo+2));
	printf("Elemento[3]:%d\n",*(arreglo+3));
	printf("Elemento[4]:%d\n",*(arreglo+4));

	printf("\nMEDIANTE UN FOR\n");

	for(i=0;i<5;i++){
		printf("Elemento[%d]:%d\n",i,*(arreglo+i));
}

return 0;
}
