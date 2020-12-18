/*Programa que maneja estructuras autoreferenciadas y apuntadores a ellas, se observa el comportamiento de los miembros "siguiente" cuando los apuntadores apuntan a distintos lados. ES DE SUMA IMPORTANCIA RECORDAR QUE LOS APUNTADORES dato* POR SI SOLOS NO TIENEN MIEMBROS PORQUE NO SON ESTRUCTURAS DEL TIPO dato SINO QUE SOLAMENTE SON UNAS FLECHAS QUE APUNTAN A ESPACIOS DE MEMORIA LOS CUALES SI SON ESTRUCTURAS CON MIEMBROS. ANTES YO PENSABA QUE ESTE PROGRAMA ME ARROJABA ERRO Y LO EXPRESABA DE LA SIGUIENTE FORMA "al parecer cuando se igualan apuntadores, tambien igualamos los miembros SIGUIENTE, pero si despues apuntamos a otro lado algun apuntador el miembro siguiente apunta a donde sea"*/

#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato;

int main(){
	dato Var1, Var2,Var3,Var4;
	dato*uno=&Var1;
	dato*dos=&Var2;
	
	printf("la dir de Var1 es %p\n", &Var1);
	printf("la dir de Var2 es %p\n", &Var2);
	printf("la dir de Var3 es %p\n", &Var3);
	printf("la dir de Var4 es %p\n", &Var4);

	printf("apuntador uno guarda la direccion de %p\n", uno);
	printf("apuntador uno->siguiente apunta a %p\n", uno->siguiente);

	printf("apuntador dos guarda la direccion de %p\n", dos);
	printf("apuntador dos->siguiente apunta a %p\n", dos->siguiente);

	//QUE PASA CON LOS MIEMBROS SIGUIENTE DE LOS APUNTADORES SI IGUALO LOS APUNTADORES?

	uno=dos; 

	printf("\n Despues de igualar los apuntadores \n");
	printf("apuntador uno guarda la direccion de %p\n", uno);
	printf("apuntador uno->siguiente apunta a %p\n", uno->siguiente);

	printf("apuntador dos guarda la direccion de %p\n", dos);
	printf("apuntador dos->siguiente apunta a %p\n", dos->siguiente);
	printf("CONCLUSION: UN APUNTADOR ES UN SOLO UNA FLECHA A UN ESPACIO DE MEMORIA DETERMINADO, POR LO QUE AL MOMENTO DE IGUALAR DOS APUNTADORES (DOS FLECHAS) DEJO DE TENER ACCESO A UN PEDAZO DE MEMORIA QUE ESTABA SIENDO APUNTADO ANTES DE LA IGUALACION. EN ESTES CASO PARTICULAR EL PEDAZO DE MEMORIA AL QUE YA NO TENGO ACCESO ES EL APUNTADO PREVIAMENTE POR UNO EL CUAL ERA EL RESPECTIVO A VAR1 Y CON ELLO TAMPOCO TENGO ACCESO A LOS MIEMBROS DE VAR1.  \n");
	//HACIENDO QUE EL APUNTADOR APUNTE A OTRO LADO 

	uno=&Var3;

	printf("\nDespues de hacer que uno apunte a otro lado\n");
	printf("apuntador uno guarda la direccion de %p\n", uno);
	printf("apuntador uno->siguiente apunta a %p\n", uno->siguiente);

	printf("apuntador dos guarda la direccion de %p\n", dos);
	printf("apuntador dos->siguiente apunta a %p\n", dos->siguiente);
	printf("CONCLUSION: COMO ERA DE ESPERARSE YA NO TENGO ACCESO AL ELEMENTO DE MEMORIA RELACIONADO A VAR2 (Y TAMPOCO A NINGUNO DE SUS MIEMBROS)PORQUE MI FLECHA YA LA APUNTE A OTRO ESPACIO DE MEMORIA(VAR3). POR LO ANTERIOR IMPRIMO LOS ELEMENTOS SIGUIENTES DEL NUEVO ESPACIO DE MEMORIA Y NO DEL PREVIAMENTE APUNTADO\n");



return 0;
}
