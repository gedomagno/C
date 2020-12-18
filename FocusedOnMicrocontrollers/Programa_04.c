/*Programa que muestra el resultado de desplazar a la izquierda un bit */

#include<stdio.h>

int main(){
  int a=7;
  printf("valor de a en hexadecimal %X y decimal %d\n", a, a);
  a=a<<4;     //desplazamiento del 7 -> 0111 4 posiciones a la derecha
  printf("valor despues del desplazamiento 4 posiciones a la derecha,en hexadecimal %X y decimal %d\n", a,a);
  return 0;
}
