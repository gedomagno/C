/*Programa que le pregunta al usuario si desea que siga imprimiendo un mensaje
Se utiliza la instrucción getche la cual sirve para leer lo escrito en el teclado*/


#include<stdio.h>

int main(){
    char res='S';
    while(res=='S' || res=='s'){
    printf("\t\n Bloque verdadero");
    printf("\t\n Desea continuar (S/N)");
    res=getche();
    }

return 0;
}
