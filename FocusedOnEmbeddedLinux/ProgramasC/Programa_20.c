/*Programa que recorre un arreglo e imprime el valor mayor de el*/

#include<stdio.h>

int main(){
	int vector[5]={23,80,207,12,19};
	int i;
	int mayor=0;

	for(i=0;i<5;i++) 
       { 
			if(mayor<vector[i])	//en caso de que mayor sea menor que vector, este adopta su valor
			mayor=vector[i];
       }
	printf("El mayor es %d", mayor);	

return 0;
}
