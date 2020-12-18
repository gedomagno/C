/* Programa que representa las consonantes del abecedario(mayusculas)
   Realizado por Gerardo Maldonado
   19-Agosto-2014, 2:05 */
   
#include<stdio.h>   
#include<conio.h>
#include<stdlib.h>

main(){
       char letra=65;
       
       while(letra<=90){if(letra!=65 && letra!=69 && letra!=73 && letra!=79 && letra!=85)
                          {printf("%c ",letra);}
                        letra++;
                        }
                        getch();
       }
