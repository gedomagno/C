/*Programa que compara dos cadenas y determina si son o no iguales*/

#include<stdio.h>
#include<string.h>

int main(){
	char cadena1[20];
	char cadena2[20];
	printf("ingrese un texto: ");
	scanf("%s",cadena1);
	printf("ingrese otro texto: ");
	scanf("%s",cadena2);
	
/*	strcmp(s1,s2) 	   Compara dos cadenas, la fun. regresa:
                                           <0 si s1<s2.
					   0 si s1==s2
					   >0 si s1>s2 */	

	if(strcmp(cadena1,cadena2)==0){
											printf("Las cadenas son iguales\n");
										}
								else	{
											printf("Las cadenas son diferentes\n");
										}			

return 0;
}