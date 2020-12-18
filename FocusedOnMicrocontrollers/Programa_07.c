/*Programa que muestra el comportamiento de los operadores unitarios

1) - : Cambia de signo al operando(complemento a2). El operando puede ser entero o real
2) ~ : Complemento A1 del operando. El operando tiene que ser entero*/

#include<stdio.h>

int main(){
  int op1=10;
  printf("valor original del op1 es %d y %X\n", op1,op1);
  printf("Despeus de aplicarle el operandor - se obtiene: %d y %X (complemento a2)\n", -op1,-op1);
  printf("Despues de aplicar el operador ~ se obtiene: %d y %X (complemento a1)\n", ~op1, ~op1);

return 0;
}
