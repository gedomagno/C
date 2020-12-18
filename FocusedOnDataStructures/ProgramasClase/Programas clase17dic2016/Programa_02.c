/*Ordenamiento por burbuja*/

#include<stdio.h>


int main(){

    int a[10]={1,4,7,3,2,5,9,0,6,8};
    int i=0;
    int j=0;
    int n=10;
    int aux=0;

    for(i=0;i<n-2;i++){
        for(j=0;j<n-(i+1);j++){
            if(a[j]>a[j+1]){
                aux=a[j+1];
                a[j+1]=a[j];
                a[j]=aux;
            }
        }
    }

    for (i=0;i<10;i++)
       printf("Elemento[%d]:%d\n", i, a[i]);
return 0;
}
