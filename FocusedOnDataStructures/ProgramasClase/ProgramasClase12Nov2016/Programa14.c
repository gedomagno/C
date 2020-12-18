#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char cadena[80];
    char *apuntador;
    int longitud;
    puts("\nIntroduce una linea: ");
    gets(cadena);
    longitud=strlen(cadena);
    apuntador=(char*)malloc((longitud+1)*sizeof(char));
    strcpy(apuntador,cadena);
    printf("\nEl apuntador tiene: %s",apuntador);
    free(apuntador);
    return 0;
}
