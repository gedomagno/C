/*funcion de ackerman con recursividad*/

#include<stdio.h>

int ackerman(int m, int n);

int main(){
	int m,n,res;
	printf("ingrese m y n: ");	
	scanf("%d %d",&m,&n);
	res=ackerman(m,n);
	printf("resultado= %d",res);
}

int ackerman (int m, int n){
	if(m==0){
		return n+1;}
		else if (n==0 && m>0){
			return ackerman(m-1,1);}
			 else if (m>0 && n>0){
			 	 return ackerman(m-1,ackerman(m,n-1));}
}

