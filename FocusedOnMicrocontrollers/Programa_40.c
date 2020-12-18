/*Programa que calcula el complemento a1 de un numero.Se utiliza el operando ~ */

#include<stdio.h>

int main(){
	char var=37;
	printf("37 en hexadecimal es %X\n", var);
	var=~var;
	printf("El complemento a1 de 37 es %d y en hexadecimal es %X", var, var);
	
return 0;
}
/*NOTA MUY IMPORTANTE: EL VALOR REGRESADO POR LA COMPUTADORA ESTA REPRESENTADO 
 BAJO EL CONVENIO DE COMPLEMENTO A2, POR LO QUE PARA OBTENER EL VALOR EN DECIMAL
 ES NECESARIO APLICARLE AL RESULTADO LA OPERACION COMPLEMENTO A2*/
