/*Programa con un arreglo de estructuras. El arreglo es una agenda de amigos, cada elemento del arreglo es un tipo de dato estructura. Los campos de las estructuras los va ingresando el usuario*/

#include<stdio.h>

struct amigo{
	char nombre[20];
	char apellido[20];
	int edad;
	int telefono[10];

};

struct amigo agenda[5];	

int main(){
	int i=0;

	for(i=0;i<5;i++){			//llenado del arreglo
		printf("Nombre: ");
		fflush(stdout);
		scanf("%s",agenda[i].nombre);

		printf("Apellidos: ");
		fflush(stdout);
		scanf("%s",agenda[i].apellido);

		printf("Edad: ");
		scanf("%i",&agenda[i].edad);	

		printf("Telefono: ");
		scanf("%i",agenda[i].telefono);

}
	printf("\nDatos ingresados\n");


	for(i=0;i<5;i++){			//impresion de los datos 

		printf("Nombre[%d]: %s\n",i,agenda[i].nombre);
		printf("Apellidos[%d]: %s\n",i, agenda[i].apellido);
		printf("Edad[%d]: %d\n",i,agenda[i].edad);
		printf("Telefono[%d]: %d\n",i,agenda[i].telefono);

}

return 0;
}
