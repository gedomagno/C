/*Programa que calcula el area y el perimetro de un rectangulo por medio de funciones*/

#include<stdio.h>

int perimetro(int base, int altura);

int area(int base, int altura);

int main(){
	int a,b,c,d;
	printf("\n Ingrese la base del rectangulo");
	scanf("%d", &a);
	printf("\n Ingrese la altura del rectangulo");
	scanf("%d", &b);
	c=perimetro(a,b),
	d=area(a,b);
	printf("Perimetro:%d Area:%d", c, d);

return 0;
}

int perimetro(int base, int altura){
	int per;
	per=2*(base+altura);
return (per);
}

int area(int base, int altura){
	int are;
	are=base*altura;
	return (are);
}

