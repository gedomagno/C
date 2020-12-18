/*Programa que muestra algunos usos de una mascara con la operacion logica AND
-----CONCEPTOS PARA ENTENDER LA MASCARA------
Una mascara es una secuencia de bits
Una secuencia de bits es un conjunto de bits
Una operacion logica es un AND u OR u XOR etc
---------------------------------------------

Una mascara es una secuencia de bits(primer secuencia) que combinada con una operacion logica y otra secuencia de bits (segunda secuencia), permite obtener informacion sobra 
o modificar la segunda secuencia

Primer secuencia + Operacion logica + Segunda secuencia(MASCARA) => Info de la primera secuencia
----------------------------------------------
1) Uso, forzar algun bit a que sea cero
2) Conocer si algun bit es cero o uno
----------------------------------------

PRIMER USO
Tengo la secuencia de bits 0111110 (62) y quiero que el 3 y 4 bit se conviertan en cero osea 0110010 (50)
*/

#include<stdio.h>

int main(){
	int secBits=62;// en binario 0111110;	//62 en decimal
	int mascara=50;// en binario 0110010;	//50 en decimal
	//resultado esperado en binario=0110010=50
	int res=0x0;

	printf("res=secBits & mascara=%d\n", secBits&mascara);
	printf("0111110 & 0110010=%d\n", 62 & 50);
	printf(" 62 AND 50 =%d\n", 62 & 50);

	
	printf("\n\nSegundo ejemplo de primer uso\n");
	//Quiero que el tercer bit sea cero=>10011
	secBits=23; //10111
	mascara=27;	//11011

	printf("23 AND 27 =%d\n", 23&27);
	printf("19 en binario es 10011 por lo tanto hemos cambaido el tercer bit a cero");
	return 0;
}

