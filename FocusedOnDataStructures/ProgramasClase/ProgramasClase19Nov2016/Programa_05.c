/*Recursividad*/

#include<stdio.h>

int multiplicacion(int a,int b);

int main(){
	int res=0;
	
	res =multiplicacion(10,8);
	printf("Resultado=%d", res);

return 0;
}

int multiplicacion(int a,int b){
	if(b==0){
		return 0;
	}else
	return a+ multiplicacion(a,b-1);
	
}
