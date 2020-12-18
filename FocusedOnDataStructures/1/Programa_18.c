/*Programa de apuntador a estructuras. Se inicializa una estructura y se accede a sus campos mediante un apuntador a esa estructura*/

#include<stdio.h>

struct valedor{
	char nombre[10];
	char apellido[15];
	int edad;
	char vicio[10];

};

typedef struct valedor midato;	//sinonimo de un tipo de dato

	midato Var1={"Jorge","Lara",31,"cerveza"};
	midato* appVar1;	//apuntador a una estructura

int main(){

	appVar1=&Var1;		//el apuntador apunta a Var1

	printf("Nombre: %s\n",appVar1->nombre);
	printf("Apellido: %s\n",appVar1->apellido);
	printf("Edad: %d\n",appVar1->edad);
	printf("Vicio: %s\n",appVar1->vicio);

return 0;
}
