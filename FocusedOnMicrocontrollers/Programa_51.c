/*Programa que genera 8 mascaras, una para cada bit, medinate el corrimiento de bits*/

#include<stdio.h>

int main(){
	char secBits=1;
	char mascara=0;
	char i=0;
	
		for(i=0;i<8;i++)
		{
			mascara=secBits<<i;	
			printf("mascara=%d y 0x%X\n", mascara, mascara);
		
		}

return 0;
}
