/*Programa que muestra como se separa un numero de 8 bits en tres numeros, el primero de 3 bits el segundo de 2 bits y el tercero de 3 bits mas. Se utiliza mascaras AND y desplazamientos de bits*/

#include<stdio.h>


int main(){
	char completo=105;
	char p_num=(completo & 0xE0)>>5;	//con esto obtengio los tre primeros bits
	char s_num=(completo & 0x18)>>3;	//con esto obtengo los bits intermedios 
	char t_num= completo & 7;					//con esto obtengo los 3 bits menos significativos
	printf("completo=%d=0x%X\n", completo, completo);
	printf("p_num=%d=0x%X\n", p_num, p_num);
	printf("s_num=%d=0x%X\n", s_num, s_num);
	printf("t_num=%d=0x%X\n", t_num, t_num);



return 0;
}
