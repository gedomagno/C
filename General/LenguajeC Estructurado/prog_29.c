#include<stdio.h> // concepto de funciones

void funcion(void);
int var_global=5; // variable global

main()
{
      int var_local=10; //variable local
      printf("%d",var_local);
      funcion(); //llamada de la funcion 
      getch();
}

void funcion()
{
     printf("%d",var_global);
}
