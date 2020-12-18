#include<stdio.h>
#include<stdlib.h>

int main(){
	int*p=NULL;

	int N;
	printf("ingresa el valor de N: ");
	scanf("%d",&N);
	p=(int*)malloc(N*sizeof(int));//hago un cast porque malloc me devuelve un apuntador a voidn y yo debo asignarlo a p el cual es del tipo entero
	
	if(p==NULL){
		printf("Asignacion fallida\n");
		}
		printf("Asignacion exitosa\n");
	
	printf("inicio de nuestra memoria asiganda %p\n", p);	
	
	int i=0;
	for(i=0;i<N;i++){
		scanf("%d",&p[i]);	//llenado del arreglo
		
	}
	
	for(i=0;i<N;i++){		//recorremos el arreglo 
		printf("Elemento [%i]: %i\n",i, p[i]);
	}
	
	
	for(i=0;i<N;i++,p++){	//moviendo el apuntador
		printf("%d","%d",*p,p);
		//printf("%d",p);
		//p++;		
	}
	
	free(p);
	
return 0;	
}
