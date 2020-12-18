#include "libreria_circulo.h"

main() {
       float radio;
       printf("Dame el radio del circulo \n\t");
       scanf("%f", &radio);
       printf("\n\t El area del circulo es %.2f",cir_area(radio));
       printf("\n\t El perimetro del circulo es %.2f",cir_perimetro(radio));
       getch();

       }
           
