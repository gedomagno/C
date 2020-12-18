/*Programa que muestra que el miembro siguiente de una estructura autoreferenciada no apunta al mismo lado que el apuntador de la estructura lo hace. El miembro siguiente puede apuntar a donde se le da la gana porque nunca lo anclamos*/

#include<stdio.h>

typedef struct elemento {
	int a;
	float b;
	struct elemento*siguiente;
}dato;

int main(){
	dato Var1;
	dato Var2;	
	dato*inicio=&Var1;	//apuntador apunta a Var1
	printf("dir de Var1 %p\n",&Var1);
	printf("dir a la que apunta el apuntador %p\n",inicio);
	printf("dir a la que apunta inicio->siguiente %p\n",inicio->siguiente);
	
	//haciendo que inicio apunte a otra variable

	inicio=&Var2;	

	printf("dir de Var2 %p\n",&Var2);
	printf("dir a la que apunta el apuntador %p\n",inicio);
	printf("dir a la que apunta inicio->siguiente %p\n",inicio->siguiente);
	
	//haciendo que el apuntador apunte a nulo, marca violacion de segmento

/*	inicio=NULL;	

	printf("dir a la que apunta el apuntador %p\n",inicio);
	printf("dir a la que apunta inicio->siguiente %p\n",inicio->siguiente);

*/

return 0;
}
