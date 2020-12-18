#include "libreria_rectangulo.h"

main(){
       float base, altura;
       printf("\n Dame la base del rectangulo");
       scanf("%f", &base);
       printf("\n Dame la altura del rectangulo");
       scanf("%f", &altura);
       printf("\n El area del rectangulo es : %.2f", r_area(base, altura));
       printf("\n El perimetro del rectangulo es : %.2f", r_perimetro(base, altura));
       getch();
       
       }
