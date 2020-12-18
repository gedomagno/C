/*Programa que usa typedef junto con una estructura*/

#include<stdio.h>

struct Numero{
	int num1;
	int num2;
	float num3;
	float num4;	
};

typedef struct Numero mitipodedato;

int main(){
	int guardanum1;
	int guardanum2;
	float guardanum3;
	float guardanum4;
	printf("Ingrese numero1: ");
	scanf("%d",&guardanum1);
	printf("Ingrese numero2: ");
	scanf("%d",&guardanum2);
	printf("Ingrese numero3: ");
	scanf("%f",&guardanum3);
	printf("Ingrese numero4: ");
	scanf("%f",&guardanum4);
	
	mitipodedato Var1;

	Var1.num1=guardanum1;
	Var1.num2=guardanum2;
	Var1.num3=guardanum3;
	Var1.num4=guardanum4;

	printf("Miembros de la estructura:\n %i\n %i\n %.2f\n %.2f\n", Var1.num1, Var1.num2,Var1.num3,Var1.num4);


return 0;
}
