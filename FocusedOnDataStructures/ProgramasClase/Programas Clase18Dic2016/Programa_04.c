/*Tiempo que lleva un programa*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    time_t inicio, fin;
    srand(time(NULL));
    int a[100000];
    int i=0;
    for(i=0;i<10000;i++)
        a[i]=1+(rand() % 50000);

    inicio=time(NULL);

    //int a[10]={1,4,7,3,2,5,9,0,6,8};
    int j=0;
    int n=100000;
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

    //for (i=0;i<10;i++)
      // printf("Elemento[%d]:%d\n", i, a[i]);

    inicio=time(NULL);
    printf("El tiempo que se llevo es %f",fin-inicio);
return 0;
}
