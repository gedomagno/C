/*Programa que muestra el comportamiento de operadores logicos*/


#include<stdio.h>

int main(){
	int x=2, y=0, z=5;
	int res=0;

	printf("x && y=%d\n", x && y);	//aqui me devolvera cero porque la oepracion el falsa. Para C, cero significa falso y todo lo demas diferente de cero es considerado verdadero
 	printf("x && z=%d\n", x && z);	//aqui meda uno (cierto) porque ninguno de los dos son falsos (igual a cero)
	printf("x || y=%d\n", x || y);	//uno es verdadero y el otro falso
	printf("!y=%d\n", !y);	//me regresa uno (verdadero) porque niega lo falso


return 0;
}
