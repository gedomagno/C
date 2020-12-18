#include<stdio.h>
#include <math.h>

float pol_area(float n, float lado){
    return((n*lado*lado))/(4*tan(3.1416/n));
                       }

float pol_perimetro(float n, float lado){
    return(n*lado);
                       }
                       
