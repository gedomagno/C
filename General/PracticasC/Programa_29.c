/*Programa que imprime el abecedario en mayusculas omitiendo las vocales*/

#include<stdio.h>

int main(){
    char letra=65;

    while(letra<=90){
        if(letra!=65 && letra!=69 && letra!=73 && letra!=79 && letra!=85){
            printf("%c ", letra);
        }
        letra++;
    }
return 0;
}
