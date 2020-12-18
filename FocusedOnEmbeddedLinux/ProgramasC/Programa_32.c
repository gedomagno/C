/*Programa que utiliza un arreglo para manejar cadenas de caracteres. A la salida se presenta un warning, sin embargo el funcionamiento es bueno*/

#include<stdio.h>
#include<string.h>

int main(){
	char MenEnv[20];
	printf("\nIngrese un mensaje: ");
	scanf("%s", &MenEnv);

	printf("\n El mensaje escrito fue: %s", MenEnv);
	printf("\n La longitud del mensaje es %d", strlen(MenEnv)+1); //el 1 es para considerar el final de cadena
	

return 0;
}