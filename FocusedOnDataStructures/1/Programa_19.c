/*Programa que usa un apuntador a una estructura para llenar los campos de la misma y los imprime*/

#include<stdio.h>

struct carro{
	char color[10];
	int modelo;
	char marca[10];
	float precio;	
};

struct carro coche;

struct carro* appCoche;

int main(){

	appCoche=&coche;

	printf("Ingrese los datos\n");
	printf("Marca: ");
	scanf("%s",appCoche->marca);
	printf("Color: ");
	scanf("%s",appCoche->color);
	printf("Modelo: ");
	scanf("%d",&appCoche->modelo);
	printf("Precio:" );
	scanf("%f",&appCoche->precio);

	//impresion de datos

	printf("Datos ingresados\n");

	printf("Marca:%s, Color:%s, Modelo:%d, Precio:%.2f\n",appCoche->marca,appCoche->color,appCoche->modelo,appCoche->precio);

return 0;
}
