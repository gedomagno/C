/*Programa que define una estructura de datos (alumno) su llenado y muestra los elementos, se utilizan tipos de datos int,float,char,arreglo de caracteres*/

struct alumno{
	char nombre[10];
	int edad;
	char sexo;
	float estatura;
	float peso;
};

#include<stdio.h>
#include<string.h>

int main(){

	struct alumno primeralumno;	//declaracion de variable del tipo struct 
	strcpy(primeralumno.nombre,"Gerardito");
	primeralumno.edad=33;
	primeralumno.sexo='m';
	primeralumno.estatura=1.72;
	primeralumno.peso=73.2;

	printf("Nombre: %s\n",primeralumno.nombre);
	printf("Edad:%d\n",primeralumno.edad);
	printf("Sexo: %c\n",primeralumno.sexo);
	printf("Estatura: %.2f\n", primeralumno.estatura);
	printf("Peso: %.2f\n", primeralumno.peso);


return 0;


}
