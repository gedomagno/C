/*Programa que muestra el desplazamiento hacia la izquierda de un numero y el resultado
El desplazamiento hacia la izquierda significa multiplcar al numero por dos en cada posicion de desplazamiento
*/

#include<stdio.h>

int main(){
  int a=10;
  printf("El valor de a en hexadecimal es: %X y en decimal %d\n",a,a);
  a=a<<1;
  printf("El valor de a despues del desplazo de una posicion hacia la izquierda es hexadecimal: %X y decimal %d:\n", a, a);

return 0;
}
