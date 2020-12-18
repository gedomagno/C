/*Programa que imprime las vocales del abecedario del codigo ascii*/

#include<stdio.h>

int main(){
    char voc=97; //el 132 representa la ä en codigo ascii

    while(voc<=122){
        if(voc==97 || voc==101 || voc==105 || voc==111 || voc==117){
            printf("%c ", voc);}

            voc++;
    }

return 0;
}
