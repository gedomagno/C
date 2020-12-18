/*Programa que llena un arreglo de estructuras mediante un apuntador a ese arreglo de estructuras*/

#include<stdio.h>

typedef struct animal{
	char especie[10];
	int edad;
	char nombre[10];
} mascota;

	mascota Var1[5];	//arreglo de estructuras

	mascota*p_Var1;		//apuntador a mascota

int main(){
	p_Var1=Var1;	//apuntador apunta a Var1
	int=0;
	for(i=0;i<5;i++){
		printf(Especie[%i]: );
		scanf("%s",p_Var1->especie);
		printf();


}

return 0;
}


