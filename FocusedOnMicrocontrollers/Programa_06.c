/*Programa que muestra el uso de operadores logicos en c*
Los operadores logicos utilizados son && (and), || (or), ! (not)
&& : Dara cero cuando alguno de los operandos sea cero y dara 1 solo cuando los dos operandos no sean cero
|| : Dara 1 cuando aguno de los oeprandos sean diferente de cero y daran cero cuando los dos sean cero
!  : Dara cero cuando el operando sea diferente de cero y dara 1 cuando el operando sea cero
*/
#include<stdio.h>

int main(){

	int op1=0;
	int op2=0;
	int op3=0;
	printf("Ingrese op1, op2, op3 separados por comas\n");
	scanf("%d, %d, %d", &op1,&op2,&op3);

	printf("Los numeros ingresados fueron :%d, %d, %d\n", op1, op2, op3);	
	printf("op1 && op2= %d\n", op1 && op2);
	printf("op1 || op2= %d\n", op1 || op2);
	printf("!op3= %d\n", !op3);
	
return 0;
}