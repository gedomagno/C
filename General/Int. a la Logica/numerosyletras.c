/* Programa que va de x a y y muestra las letras del abecedario
   Realizo Gerardo Maldonado
   19-Agosto-2014, 9:26*/
   
#include<stdio.h>   
#include<conio.h>
#include<stdlib.h>

main (){
       int liminf=65;
       int limsup=90;
       char letrainicial=65;
       
       printf("\n Introduzca un limite inferior ");
       scanf("%i", &liminf);
       printf("\n Introduzca un limite superior ");
       scanf("%i", &liminf);

       while(liminf<=limsup){printf("\n %i ", liminf);
                             printf("\t %c ", letrainicial);
                             letrainicial++;
                             liminf++; }

//       while(letrainicial<=letrafinal){printf("\n %c ", letrainicial);
//                           letrainicial++; }

       getch();
                            
      }
