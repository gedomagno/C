/*Programa que muestra como utilizar la mascara AND para forzar a cero un bit de una secuencia de bits*/
/*Se debe recordar que 
 						 X AND 0 = 0; sin importar que valor tenga X siempre sera cero
En este caso deseo que el 5 y el 1 bit sean cero						 
						 */

#include<stdio.h>

int main(){
	char SecBits=63;	
	char mask =238; //1110 1110 con esta mascara garanntizo que el valor del quinto bit sea cero
	int res=0;
	res=SecBits & mask;
	printf("el resultado de la operacione es %d y en decimal es %X\n", res, res);

//Analizando el resultado se observa que el primero y quinto bits fueron cambiados a cero
return 0;
}








