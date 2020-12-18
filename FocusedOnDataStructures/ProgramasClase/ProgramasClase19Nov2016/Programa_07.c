#include<stdio.h>

int factorial (int n);

int main(){
	
	int n=0, res=0;
	printf("ingrese n: ");
	scanf("%d",&n);
	res=factorial(n);
	printf("Resulatd %d", res);
return 0;
	}

int factorial(int n){
	if(n==0){
		return 1;
	}else{
		  return n*factorial(n-1);
	}
	
}
