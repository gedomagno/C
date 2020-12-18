/*Programa que calcula el perimetro y area de un rectangulo mediante la cabecera cabeceraPrograma_13*/

#include "CabeceraPrograma_13.h"

int main(){
	int base, altura;
	printf("Introduzca la base del rectangulo");
	scanf("%d", &base);
	printf("Introduzca la altura del rectangulo");
	scanf("%d", &altura);
	
	printf("Area: %d, Perimetro: %d", perimetro(base,altura),area(base,altura));

	return 0;
}
