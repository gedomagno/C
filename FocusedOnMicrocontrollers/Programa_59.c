/*Programa que hace un repaso de apuntadores y ademas muestar como utilizar un define con apuntadores*/

#include<stdio.h>
#define MIAPUNTADORCONSTANTE (int*)0x61FF30	//aqui declaras a una direccion de memoria como constante


int main(){
	int var1=10;
	int*apuntador=&var1;
	
	printf("var1=%d\n", var1);
  printf("contendio de apunatdor=0x%X\n", apuntador);
	apuntador++;
	printf("Contenido de apuntador=0x%X\n", apuntador);
	apuntador--;
	printf("Contendo de la variable apuntada por apunatdor=%d\n", *apuntador);
	(*apuntador)++;
	printf("Nuevo contenido de la variable apuntador=%d\n", *apuntador);
	apuntador++;
	apuntador++;
	printf("contenido de apunatdor=%X\n", apuntador);
	*(apuntador)=1;
	printf("contenido del apunatdor=%d\n", *apuntador);
//aqui puedo ver el contenido mediante la constante que declare

	printf("MIAPUNTADORCONSTANTE=%X\n", MIAPUNTADORCONSTANTE);	
	printf("Contenido de la direccion 0x61FF30=%d\n", *MIAPUNTADORCONSTANTE);

return 0;
}
