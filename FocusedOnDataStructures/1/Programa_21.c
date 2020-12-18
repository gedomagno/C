/*Programa que utiliza un apuntador a un arreglo a estructuras y que imprime su contenido*/

#include<stdio.h>

struct trabajador{
	char nombre[10];
	char puesto[10];
	int sueldo;
};

typedef struct trabajador empleado;	//establezco sinonimo de struct trabajador

	empleado Var1[]={"Gerardo","Empleado",100,	//arreglo de estructuras
					  "Juan", "Gerente",200,	
					  "Rey", "Ejecutivo",500,};	

	empleado*p_Var1;	//apuntador al tipo empleado

int main(){
	p_Var1=Var1;	//el apuntador apunta al primer elemento del arreglo
	
	int i=0;

	for(i=0;i<3;i++){	//impresion del arreglo de estructuras mediante apuntadores
		printf("%i:Nombre:%s, puesto:%s, sueldo:%d\n",i, p_Var1->nombre, p_Var1->puesto, p_Var1->sueldo);
		p_Var1++;

}



return 0;
}
