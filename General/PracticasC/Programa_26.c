/*Programa que muestra una cuenta que va desde 1 hasta 3 cada 3 centecimas */

#include<stdio.h>

int main(){
    float num1=1;

    while(num1<=3){
        printf("%0.3f,", num1);
        num1+=0.003;
    }

return 0;
}
