/*Programa que cuenta con 4 variables a estructuras autoreferenciadas, dos apuntadores a esas variables. Se analiza cuidadosamente el miembro siguiente de las variables (del tipo estructuras referenciadas) y se observa como podemos imprimirlos mediante apuntadores. RECORDAR QUE LOS APUNTADORES NO CONTIENEN MIEMBROS POR SI MISMOS SINO QUE SOLO SON UNA FLECHA QUE APUNTA A UN SEGMENTO DE MEMORIA EN DONDE SI ESTA UNA ESTRUCTURA LA CUAL SI TIENE MIEMBROS*/

#include<stdio.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato;

int main(){
	dato Var1, Var2, Var3,Var4;
	dato*uno=NULL;
	dato*dos=NULL;

	printf("dir de Var1 %p\n",&Var1);
	printf("dir de Var2 %p\n",&Var2);
	printf("dir de Var3 %p\n",&Var3);
	printf("dir de Var4 %p\n",&Var4);

	//hago que el miembro siguiente apunte a Var3 y Var4

	uno=&Var1;	//uno apunta a Var1
	dos=&Var4;	//dos apunta a Var4

	printf("dir a la que apunta uno %p\n",uno);
	printf("dir a la que apunta dos %p\n",dos);
	printf("dir a la que apunta uno->siguiente %p\n",uno->siguiente);
	//aqui lo que hago le defino una localidad de memoria a donde apuntar a uno->siguiente
	uno->siguiente=&Var3;
	printf("ahora la nueva dir a la que apunta uno->siguiente %p\n",uno->siguiente);
	
	//igualo uno y dos

	uno=dos;
	//Hacer una igualacion de apuntadores significa que la direccion del segmento de memria a la que apuntaba el apuntador uno ha cambiado, ahora el apuntador uno apunta al mismo segmento de memoria que apuntaba dos por lo que ya es imposible imprimir uno->siguiente del segmento anterior de memoria porque uno ya no apunta a ese segmento de memoria, ahora uno apunta a otro segmenteo de memoria con otro uno->siguiente. RECORDAD QUE UN APUNTADOR A ESTRUCTURA SOLO DENOTA UNA LOCALIDAD DE MEMORIA DONDE HAY UNA ESTRUCTURA (QUE TIENE MIEMBROS) PERO EL APUNTADOR POR SI MISMO NO TIENE MIEMBROS DE ESTRUCTURA. 
	printf("Ahora uno apunta a la direccion %p\n",uno);
	printf("Contenido de uno->siguiente %p\n",uno->siguiente);



return 0;
}
