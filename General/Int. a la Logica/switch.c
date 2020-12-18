/* Programa del casp switch
   Realizo Gerardo Maldonado
   22-Agosto-2014, 12.:14 */
   
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){
       
       double num1;
       double num2=0;
       double res=0;
       char respuesta=' ';
       char resUser=' ';       
       
       do{
            printf("\n\n\t\t\t **** SUPER CALCU KADIO 3000 *** \n");
            
            printf("\n\n\t a) Suma.");
            printf("\n\n\t b) Resta.");
            printf("\n\n\t c) Multiplicador.");
            printf("\n\n\t d) Divison.");
            printf("\n\n\t e) Raiz.");
            printf("\n\n\t f) Potencia.");
            printf("\n\n\t g) Modulo.");
            printf("\n\n\t h) Porcentaje.");
            printf("\n\n\t i) Salir...=(.");
            
            printf("\n\n\t\t Escoge una opcion... Respeusta: ");
            scanf("%s", &respuesta);
       
            switch(respuesta){
            
            case 'a': //suma
                 printf("\n\n\t Dame un numero: ");
                 scanf("%lf", &num1);
                 printf("\n\n\t Dame otro numero: ");
                 scanf("%lf", &num2);
                 
                 res=num1+num2;
                 
                 printf("\n\n\t La suma es: %.4lf", res);
                 
                 break;

            case 'b': // resta
                 printf("\n\n\t Dame un numero: ");
                 scanf("%lf", &num1);
                 printf("\n\n\t Dame otro numero: ");
                 scanf("%lf", &num2);
                 
                 res=num1-num2;
                 
                 printf("\n\n\t La resta es: %.4lf", res);
                 
                 break;
                 
            case 'c': // multiplicacion
                 printf("\n\n\t Dame un numero: ");
                 scanf("%lf", &num1);
                 printf("\n\n\t Dame otro numero: ");
                 scanf("%lf", &num2);
                 
                 res=num1*num2;
                 
                 printf("\n\n\t La multiplicacion es: %.4lf", res);
                 
                 break;
       
            case 'd': //division
                 printf("\n\n\t Dame un numero: ");
                 scanf("%lf", &num1);
                 printf("\n\n\t Dame otro numero: ");
                 scanf("%lf", &num2);
                 
                 res=num1/num2;
                 
                 printf("\n\n\t La division es: %.4lf", res);
                 
                 break;
       
            case 'e': //raiz
                 printf("\n\n\t Dame un numero: ");
                 scanf("%lf", &num1);
                 
                 (float)res=sqrt(num1);
                 
                 printf("\n\n\t La raiz cuadrada es: %.4lf", res);
                 
                 break;
       
            case 'f': // potencia
                 printf("\n\n\t Dame un numero: ");
                 scanf("%lf", &num1);
                 
                 res=pow(num1,2);
                 
                 printf("\n\n\t el cuadrado del numero es: %.4lf", res);
                 
                 break;
                 
            case 'g': //modulo
                 printf("\n\n\t Dame un numero: ");
                 scanf("%lf", &num1);
                 printf("\n\n\t Dame otro numero: ");
                 scanf("%lf", &num2);
                 
                 res=(int)num1%(int)num2;
                 
                 printf("\n\n\t El residuo de dividir La division es: %.4lf", res);
                 
                 break;

            case 'h': //porcentaje
                 printf("\n\n\t Dame un numero: ");
                 scanf("%lf", &num1);
                 
                 res=num1/100;
                 
                 printf("\n\n\t el porcentaje del numero es: %.4lf", res);
                 
                 break;
       
            case 'i': //salir
                 printf("\n\n\t Esa opcion no es valida: ");
                 exit(0);
                 
                 break;
                 
            default:
                                         
                 printf("\n\n\t Solo elige opciones validas" );
                  }
                    printf("\n\n\t Desea realizar otra operacion? <s/n>... Respuesta: ");
                    scanf("%s", &resUser);
                    }while (resUser =='s' || resUser=='S' );

                    getch();         
       
       }   
