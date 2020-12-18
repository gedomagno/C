/*Programa que suma los elementos de un arreglo e imprime el resultado*/

#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int i=0;
    int res=0;

    for(i=0;i<5;i++){
        res=res+arr[i];
    }

    printf("%d", res);

return 0;
}
