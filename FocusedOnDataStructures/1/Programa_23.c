/*Programa que llena un arreglo mediante su apuntador*/

#include<stdio.h>

int main(){

	int arreglo[5];
	int i=0;

	for(i=0;i<5;i++){
		printf("Elemento[%d]: ",i);
		scanf("%d", *(arreglo+i));
		arreglo++;
}	
	
	for(i=0;i<5;i++)
		printf("Elemento[%i]:%d\n",i,*(arreglo+i));
	
return 0;
}
