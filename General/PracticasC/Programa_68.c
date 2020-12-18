#include <stdio.h>
#include <string.h>

int main(){
    char nombre[20];
    char var1[20];

    printf("Inrese el nombre");
    scanf(" %s", &var1);
    //scanf("%s", &nombre);

    strcpy(nombre,var1);
    printf("El nombre ingresado es %s", nombre);


return 0;
}
