/*Programa que muestra como unir tres numeros de 2, 2 y 4 bits en uno solo de 8 bits. Se utiliza mascaras OR y desplazamientos de bits*/

#include<stdio.h>

int main(){
	char p_num=10;
	char s_num=3;
	char t_num=0x10;

	printf("p_num=0x%X\n", p_num);
	printf("s_num=0x%X\n", s_num);	
	printf("t_num=0x%X\n", t_num);
 	p_num=p_num<<4;	//con esto hago que t_num sean los bits mas significativos
	s_num=s_num<<2;	//con esto hago que s_num sean los bits intermedios
	t_num=t_num>>4;	//con esto hago que t_num sean los bit menos significativos

	
	char completo=(p_num | s_num) | t_num;	//recordar que la operacion or es la suma de conjuntos 

	printf("p_num desplazado 4 posiciones a la izquierda =%d, 0x%X\n", p_num, p_num);
	printf("s_num desplazado 2 posiciones a la izquierda =%d, 0x%X\n", s_num, s_num);	
	printf("t_num desplazado 4 posiciones a la derecha =%d, 0x%X\n", t_num, t_num);

	printf("completo=0x%X\n", completo);


	// AD es es l resulatdo y en binario es 10101101 lo cual demuestra que es la union de los tres numeros .

return 0;
}
