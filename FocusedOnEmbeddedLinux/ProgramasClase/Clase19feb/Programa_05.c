/*Programa con funcion fork y con codigos diferentes*/
#include<stdio.h>

 void main(){

	int pidp,pidh1,pidh2;

	pidp=fork(); //al proceso padre le regresa el pid del hijo y al proceso hijo se le da el valor de cero
		    //aqui pid tiene el valor del pid hijo y el hijo tiene el valor de cero	

	if(pidp)	 //si el if es cero es falso por lo tanto este if ejecuta el papa
		printf("\n verde: %d,pid=%d",getpid(),pid);	//getpid me obtiene el pid del proceso
	else 
		printf("\n azul %d\n",getpid());
	else 
		printf("\n verde");		
	
}
