#include<stdio.h>

typedef int ENTERO;		//defino un nuevo tipo de dato
int main(){
	ENTERO a=5;
	int b=5;
	int res;
	res=sizeof(double);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("%d\n",res);
	char x=10, y=48, aux;
    aux=x+y;
	printf("%c\n", aux);
	printf("%d",aux);

	return 0 ;
}
