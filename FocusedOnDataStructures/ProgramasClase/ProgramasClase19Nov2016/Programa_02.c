/*Apuntador a estructura*/

#include<stdio.h>
#include<string.h>

typedef struct DatosPersonales{
	char nombre[20];
	int edad;
}Datos;

int main(){
	Datos d;
	Datos*pd=&d;
	
	(*pd).edad=23;	//acceso al miembro edad MEDIANTE EL APUNTADOR. Es necesario el ()  
	pd->edad=23;	//acceso al miembro mediante apuntador



}

