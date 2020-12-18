#include "libreria_triangulo.h"

main() {
       float base, altura;
       printf("Dame la base del triangulo \n\t");
       scanf("%f", &base);
       printf("Dame la altura del triangulo \n\t");
       scanf("%f", &altura);
       printf("\n\t El area del triangulo es %.2f",t_area(base,altura));
       printf("\n\t El perimetro del triangulo1 es %.2f",t_perimetro(base));
       getch();

       }
           
