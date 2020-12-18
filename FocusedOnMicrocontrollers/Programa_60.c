/*Programa que muestra el uso de #define para decalrar constantes simbolicas*/

#include<stdio.h>
#define CONSTANTE1 "Gerardo Maldonado Martinez"				//donde yo escriba CONSTANTE1, el compilador sustituira por Gerardo Maldonado Martinez
#define CONSTANTE2 1000
#define CONSTANTE3 4020



int main(){
	printf("CONSTANTE1=%s\n", CONSTANTE1);
	printf("CONSTANTE2=%d\n", CONSTANTE2);
	printf("CONSTANTE3=%i\n", CONSTANTE3);

	return 0;
}