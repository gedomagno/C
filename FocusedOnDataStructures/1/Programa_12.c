/*Programa que suma los elementos de un arregloy saca el promedio de ellos*/

#include<stdio.h>

int main(){
	int numeros[]={3,6,6,69,42};
	int i=0;
	float suma=0;
	float promedio=0;

	for(i=0;i<5;i++){
		suma+=numeros[i];
	}

	promedio=suma/5;	

	printf("Suma=%.2f\n",suma);
	printf("Promedio %.2f\n", promedio);

return 0;
}
