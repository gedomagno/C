/*Cabecera que contiene dos funciones con las cuales calcular el perimetro y area de un rectangulo. Dicha cabecera es incluida en el Programa_13.c para calcular el area y el perimetro*/

#include<stdio.h>

int perimetro(int base, int altura){
	return 2*(base+altura);
}

int area(int base, int altura){
	return base*altura;
}
