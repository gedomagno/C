/*Programa que suma dos arreglos de 100 (C=A+B) elementos cada uno*/

#include<stdio.h>
#define DIMARRE 10

int main(){
	int A[DIMARRE],B[DIMARRE],C[DIMARRE];
	int i=0;

	for(i=0;i<DIMARRE;i++){			//llenado de arreglos	
		A[i]=i;		//A[0,1,2,3,..,99]
		B[i]=100-i;	//B[99,98,97,..,1]	
	}
	
	for(i=0;i<DIMARRE;i++){			//suma de vectores
		C[i]=A[i]+B[i];
	}

	for(i=0;i<DIMARRE;i++)	//impresion de elementos
	  {
		if(i%5==0)		//cada 5 imprime un salto de linea	  
		  {	
		    printf("\n");	
		  }			
	    printf("C[%d]=%d",i,C[i]);
	
	  }

return 0;
}

