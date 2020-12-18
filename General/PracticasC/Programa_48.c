#include<stdio.h>

void suma(int, int);

int main(){
    int a=0;
    int b=0;
    suma(a,b);
return 0;
}

void suma(int a, int b){
    printf("%i", a+b);
    a++;
    b++;
    if(a<10){
        suma(a,b);
    }else{
        return;
    }

}
