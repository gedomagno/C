/*Programa que muestra como forzar tres bits a valer uno, mediante una mascara OR
 En este caso se desea que el 2 3 y 7 bit sean uno
 Recordar que X OR 1=1, sin importar que valor tenga x, el valro sera siempre uno*/

#include<stdio.h>
int main(){
	char SecBits=36;
	char mask=70;	//0100 0110 con esta mascara aseguro quie los bits 2 3 y 7 sean uno
	char res=0;
	res=SecBits | mask;
 printf("El resulatdo es %d y en hexadecimal %X\n", res, res);	

 //Analizando el resultado se visualiza que los bits 2 , 3 y 7 son uno


return 0;
}
