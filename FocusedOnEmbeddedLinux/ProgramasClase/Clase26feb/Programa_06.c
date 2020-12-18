/*Programa declaramos un arreglo de dos elementos, el hijo los intercambia y el papa los presenta*/

#include<stdio.h>
#include<string.h>

void main(){
	int pid, pipefd[2];//
	int arr[2]={45,8};
	pipe(pipefd); //genero el pipe
	pid=fork();
	if(pid){	//lo que hace el padre
	   close(pipefd[1]); //cierro el pipe 1(el que escribe)
	   read(pipefd[0],arr,sizeof(int)*2);
	   printf("\n vector recibido:%d,%d\n",arr[0],arr[1]);	
	   	}
        else{		//lo que hace el hijo
	   int temp;   	
	   close(pipefd[0]); //cierro el pipe 0(el que lee)
	   if(arr[0]>arr[1]){
	     temp=arr[0];
	     arr[0]=arr[1];
	     arr[1]=temp;
	  		}	 	
	   
	   write(pipefd[1],arr,sizeof(int)*2); 

}  	
	   
}

