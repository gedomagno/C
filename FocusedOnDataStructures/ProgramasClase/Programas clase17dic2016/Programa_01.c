#include<stdio.h>

int main(){
    int arregloA[]={1,3,6,8,4};
    int arregloB[]={1,1,1,1,1};

    arregloA=arregloB;

    int i=0;
    for(i=0;i<5;i++)
        printf("Elemento[%d]: %d\n", i, arregloA[i]);

return 0;
}
