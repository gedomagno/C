/*Programa que utiliza una estructura como parametro de una funcion*/

#include<stdio.h>

typedef struct amigo{
	char nombre[10];
	char apellido[10];
	int edad;

}valedor;

	valedor Var1={"Gerardo","Maldonado",33};

int suma(valedor Var1);	//paso por valor una estructura a mi funcion 

int main(){
	printf("Mi edad actual es %d y dentro de 20 años tendre %i\n", Var1.edad, suma(Var1));


return 0;
}

int suma(valedor Var1){	//funcion que recibe una estructura como parametro

return (Var1.edad+20);	//aqui hago lo que deseo a los campos de la estructura
}
