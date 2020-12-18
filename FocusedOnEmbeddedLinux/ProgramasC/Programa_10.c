/*Programa que genera dos procesos hijos, cada hijo imprime algo diferente (azul, rojo, verde) y el valor de la variable que cacha lo que regresa fork*/

#include<stdio.h>

int main(){
	int var1,var2;
	var1=fork();

	if(var1==0){
		printf("pid=%d, var=%d, azul\n",getpid(),var1);
	}else{
		printf("pid=%d,var=%d,rojo\n",getpid(),var1);		
		var2=fork();
		if(var2==0){
			printf("pid=%d,var=%d, verde\n",getpid(),var2);
		}
			}

return 0;
}

