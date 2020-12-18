/*Programa que declara una estructura, se ingresan sus miembros y se utiliza el typedef*/

#include<stdio.h>
#include<string.h>

typedef struct {		//uso del typedef
	char nombre[10];	//sintaxis: typedef tipodedato sinonimo
	int cuenta;
	int grado;	
	float promedio;
}Alumno;				//	Sinonimo para el tipo de dato struct 

	Alumno Var1;		//declaracion de variable del tipo Alumno

int main(){
	char auxnombre[10];
	int auxcuenta;
	int auxgrado;
	float auxpromedio;

	printf("Nombre: ");
	scanf("%s", auxnombre);
	printf("Cuenta: ");
	scanf("%d", &auxcuenta);
	printf("Grado: ");
	scanf("%d", &auxgrado);
	printf("Promedio: ");
	scanf("%f", &auxpromedio);

	strcpy(Var1.nombre, auxnombre);
	Var1.cuenta=auxcuenta;
	Var1.grado=auxgrado;
	Var1.promedio=auxpromedio;

	printf("Datos:\nNombre: %s\nCuenta: %i\nGrado: %d\nPromedio: %.2f\n", Var1.nombre, Var1.cuenta,Var1.grado,Var1.promedio);

return 0;
}
