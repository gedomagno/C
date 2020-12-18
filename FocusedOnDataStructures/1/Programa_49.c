/*Programa que maneja apuntadores a variables del tipo estructuras autoreferenciadas. Se analiza los elementos siguiente de cada estructura y se imprimen mediante apuntadores. RECORDAD QUE UN APUNTADOR SOLO ES UNA FLECHA A UN PEDAZO DE MEMORIA QUE EN ESTE CASO PARTICULAR TIENE ESTRUCTURAS CON MIEMBROS PERO QUE EL APUNTADOR POR SI MISMO NO TIENE MIEMBROS*/

#include<stdio.h>

typedef struct elemento{
	int a;
	float b;
	struct elemento*siguiente;
}dato;

int main(){
	dato Var1,Var2,Var3,Var4;
	dato*uno;
	dato*dos;

	printf("dir de Var1 %p\n",&Var1);
	printf("dir de Var2 %p\n",&Var2);
	printf("dir de Var3 %p\n",&Var3);
	printf("dir de Var4 %p\n",&Var4);

	uno=&Var1;
	dos=&Var2;

	uno->siguiente=&Var3;
	dos->siguiente=&Var4;
	
	printf("uno guarda la direccion %p\n",uno);
	printf("dos guarda la direccion %p\n",dos);
	printf("uno->siguiente guarda la direccion %p\n",uno->siguiente);
	printf("dos->siguiente guarda la direccion %p\n",dos->siguiente);

	//igualando los dos apuntadores
	printf("\nIgualando uno=dos\n");

	uno=dos;

	printf("uno guarda la direccion %p\n",uno);
	printf("dos guarda la direccion %p\n",dos);
	printf("uno->siguiente guarda la direccion %p\n",uno->siguiente);
	printf("dos->siguiente guarda la direccion %p\n",dos->siguiente);

	//haciendo que dos apunte a otro segmento de memoria
	printf("\nHaciendo dos=&Var4\n");

	dos=&Var4;

	printf("uno guarda la direccion %p\n",uno);
	printf("dos guarda la direccion %p\n",dos);
	printf("uno->siguiente guarda la direccion %p\n",uno->siguiente);
	printf("dos->siguiente guarda la direccion %p\n",dos->siguiente);	//aqui no se sabe a que apunta el miembro siguiente porque nunca lo inicialize a algo

	//regresando a las condiciones iniciales
	printf("\nRegresando a condiciones iniciales uno=&Var1 y dos=&Var2\n");


	uno=&Var1;
	dos=&Var2;

	printf("uno guarda la direccion %p\n",uno);
	printf("dos guarda la direccion %p\n",dos);
	printf("uno->siguiente guarda la direccion %p\n",uno->siguiente);
	printf("dos->siguiente guarda la direccion %p\n",dos->siguiente);


return 0;
}
