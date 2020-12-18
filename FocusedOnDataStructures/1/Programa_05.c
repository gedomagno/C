/*Programa que utiliza datos tipo int, arreglo de char ingresados por el usuario a una estructura y la impresion de los mismos. La seccion comentada marca un error y es cuando se ingresa un caracter a un miembro de la estructura*/
/*DUDA. ¿COMO SE INGRESAN CARACTERES (CHAR) A LOS MIEMBROS DE LAS ESTRUCTURAS?*/

#include<stdio.h>
#include<string.h>

	struct miEstructura{
			int num;
			char caracter;
			char palabra[10];
			
};

int main(){
		
	
	char letra;
	char frase[10];

	int guardanum;	//var aux para los miembros de la estructura
	char guardacaracter;
	char guardapalabra[10];

	printf("ingrese una letra ");
	scanf("%c",&letra);
	printf("La letra ingresada fue %c\n", letra);

	printf("Ahora ingrese una palabra ");
	scanf("%s", frase);	//no lleva & porque es un arreglo
	printf("La palabra ingresada fue %s\n", frase);

	struct miEstructura Var1;	//variable del tipo de dato struct miEstructura

	printf("Ingrese un numero para la estructura ");
	scanf("%i",&guardanum);
	Var1.num=guardanum;
	printf("El numero ingresado a la estructura fue %d\n", Var1.num);

	printf("Ingrese una palabra para la estructura");
	scanf("%s", guardapalabra);	//no lleva & porque es un arreglo
	strcpy(Var1.palabra, guardapalabra);
	printf("La palabra ingresada a la estructura fue %s\n", Var1.palabra);

/*	printf("Ingrese una letra para la estructura");
	scanf("%c", &guardacaracter);
	Var1.caracter=guardacaracter;
	printf("La letra ingresada fue %c\n", Var1.caracter);

*/


return 0;
}
