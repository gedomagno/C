#include "libreria_poligono.h"

main(){
       float lado,n;
       printf("Dame el numero de lados del poligono");
       scanf("%f",&n);
       printf("Dame el lado del poligono");
       scanf("%f",&lado);
       printf("\n El area del poligono es %.2f", pol_area(n,lado));
       printf("\n El perimetro del poligono es %.2f", pol_perimetro(n,lado));
       getch();
       }
