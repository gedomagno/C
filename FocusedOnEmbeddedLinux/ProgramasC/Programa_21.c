/*Programa que recorre un arreglo(sus elemenetos posibles van desde 0 hasta 255) e imprime el elemento menor*/

#include<stdio.h>

int main(){
	int vector[5]={20,8,207,12,19};
	int i;
	int menor=255;
	
	for(i=0;i<5;i++){
		if(menor>vector[i])	//en caso de que menor sea mayor al elemento, menor adopta ese nuevo valor
		menor=vector[i];
					}
	printf("El menor del arreglo es %d", menor);

return 0;
}
