#include<stdio.h>

int main(){
    int a=5;
    int*appA, appB;
    appA=&a;
    appB=appA;M

    printf("el contenido de appA es %d\n", appA);
    printf("el contenido de appB es %d\n",appB);
    printf("direccion de appA es %d\n", &appA);
    printf("direccion de appB es %d\n", &appB);
    //modificando el valor de a mediante appA
    
    *appA=50;
    printf("El nuevo valor de a es %d", a);


return 0;
}
