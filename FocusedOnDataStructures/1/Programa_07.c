/*Programa que usa un arreglo de estructuras, los datos son ingresados por el usuario y desplegados en pantalla. Se utiliza la notacion punto*/

#include<stdio.h>
#include<string.h>

typedef struct {	//tipo de dato struct con sinonimo Trabajador
	char Nombre[20];
	char Departamento[15];
	float Salario;

} Trabajador;	//"Trabajador" es el sinonimo de un tipo de dato struct

int main(){
	int i=0;
	char auxnombre[20];	//variable auxiliar 
	char auxdepartamento[15];
	float auxsalario;

	Trabajador Empleados[3];	//arreglo de estructuras del tipo de dato Trabajador
	
	for(i=0;i<3;i++){	//llenado del campo "Nombre" de las estructuras
		printf("%i Nombre : ",i+1);
		scanf("%s",auxnombre);		
		strcpy(Empleados[i].Nombre, auxnombre);
		}
	
	for(i=0;i<3;i++){		//llenado del campo "departamento" de las estructuras
		printf("%i Departamento: ", i+1);
		scanf("%s",auxdepartamento);
		strcpy(Empleados[i].Departamento,auxdepartamento);
		}

	for(i=0;i<3;i++){		//llenado del campo "salario" de las estructuras
		printf("%i Salario: ",i+1);
		scanf("%f",&auxsalario);
		Empleados[i].Salario=auxsalario;
	}

	for(i=0;i<3;i++){
		printf("%i %s\n", i+1, Empleados[i].Nombre);
	}

	for(i=0;i<3;i++){
		printf("%i %s\n",i+1,Empleados[i].Departamento);
	}

	for(i=0;i<3;i++){
		printf("%i %.2f\n",i+1,Empleados[i].Salario);
	}

return 0;
}
