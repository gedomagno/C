/*Programa que usa una funcion la cual recibe como parametro un arreglo de int. La funcion calcula el promedio de los valores del arreglo y lo muestra en pantalla. Los elementos del arreglo son ingresados por el usuario*/


#include<stdio.h>

float calculo(int numeros[]);

int main(){
	int numeros[5];
	int i=0;
	float promedio=0;
	
	for(i=0;i<5;i++){		//llenado del arreglo
	
		printf("Elemento [%i]:",i);
		scanf("%i", &numeros[i]);
	}
	printf("Elementos ingresados \n");

	for(i=0;i<5;i++){		//impresion del arreglo
		printf("%i ", numeros[i]);
	}

	printf("\n");

	promedio=calculo(numeros);

	printf("El promedio es %.2f\n",promedio);
return 0;
}

float calculo(int numeros[]){
	int j=0;
	float resultado=0;
	float suma=0;	
	for(j=0;j<5;j++){
		suma+=numeros[j];
	}	

	resultado=suma/5;

return resultado;
}
