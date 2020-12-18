/*Programa que manipula los miembros de una estructura sin conocer su nombre pero si su apuntado.*/

#include<stdio.h>
#include<stdlib.h>

//typedef int entero	: acordeon de como usar typeder

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;	//estructura autoreferenciada

}dato;

int main(){
//EN NINGUN MOMENTO DECLARO EXPLICITAMENTE UNA VARIABLE DEL TIPO STRUCT ELEMENTO PERO SI DECLARO UN APUNTADOR A ESE TIPO DE DATO CON LO QUE OBTENGO UNA VARIABLE CON ESAS CARACTERISTICAS SIN CONOCER SU NOMBRE. 
	dato*inicio=NULL;	
	dato*fin=NULL;
	dato*p=NULL;	//tres apuntadores que pueden guardar direcciones de la estructura dato pero que ahorita apuntan a NULL

	p=(dato*)malloc(sizeof(dato));	//el apuntador p apunta a un pedazo de memoria del tamaño de la estructura elemento de sinonimo dato

	if(p==NULL)		//chechamos si se reservo la memoria
		printf("No se ha podido reservar memoria en el heap\n");
		printf("Reservacion de memoria exitosa\n");

	//ahora tengo un apuntador a una variable del tipo dato, se su direccion pero no su nombre.

	printf("\nModificando los miembros de la estructura mediante su apuntador p\n");

	p->a=10;
	p->b=3.14;

	printf("El valor del miembro a de p es %d\n",p->a);
	printf("El valor del miembro b de p es %f\n",p->b);
	
	

return 0;
}

