#include<stdio.h>
#include<stdlib.h>

int main(){
	int*p=NULL;
	int nbytes=100;
	p=(int*)malloc(100*sizeof(int));//hago un cast porque malloc me devuelve un apuntador a voidn y yo debo asignarlo a p el cual es del tipo entero
	if(p==NULL){
		printf("Asignacion fallida\n");
		}
		printf("Asignacion exitosa\n");
	
	printf("inicio de nuestra memoria asiganda %p", p);	
	
	free(p);
	
return 0;	
}
