//Programa que muestra como ver la direccion de la variable a
#include<stdio.h>

int main(){
  int a;
  a=10;
  printf("El valor de a es =%i\n", a);
  printf("La variable a tiene su direccion en: %p", &a);
return 0;
}
