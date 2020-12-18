/*Programa de un arreglo a estructuras, el usuario ingresa los datos de la estructuras y se imprimen, TODO SE HACE MEDIANTE APUNTADOR A ESTRUCTURA*/

#include<stdio.h>

typedef struct amigo {

	char nombre[10];
	int edad;
	char vicio[10];

}valedor;

valedor Var1[3];	//arreglo de estructuras
valedor*p_Var1;		//apuntador a estructuras

int main(){
	p_Var1=Var1;	//apuntador apunta al arreglo de estructuras
	int i=0;

	for(i=0;i<3;i++){		//llenado del arreglo de estructuras mediante apuntador
		printf("Nombre: ");
		scanf("%s",p_Var1->nombre);
		printf("Edad: ");
		scanf("%d",&p_Var1->edad);
		printf("Vicio: ");
		scanf("%s",p_Var1->vicio);

		p_Var1++;	//esta linea es la que hace que avance al otro elemento (estrutura) del arreglo
}
	printf("\n");
	//debido a que movi el apuntador es necesario regresarlo al inicio del arreglo
	
	p_Var1=Var1;

	for(i=0;i<3;i++){	//impresion del arreglo de estructuras mediante un apuntador al mismo
		printf("Nombre:%s, edad: %d, vicio: %s\n",p_Var1->nombre,p_Var1->edad,p_Var1->vicio);
	p_Var1++;


}
	
return 0;
}
