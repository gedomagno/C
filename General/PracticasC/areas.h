/*Libreria de nombre areas.h utilizada en Programa_44.c
En esta libreria se definen las funciones para calcular el perimetro y area de un
cuadrado, rectangulo, triangulo,circulo, poligono regular*/

#include<stdio.h>
#include<math.h>

int per_cuadrado(int lado){
    return(4*lado);
}

int a_cuadrado(int lado){
    return (lado*lado);
}

int per_rectangulo(int base, int altura){
    return ((2*base)+(2*altura));
}

int a_rectangulo(int base, int altura){
    return ((base*altura));
}

int per_triangulo(int lado){
    return(3*lado);
}
float a_triangulo(int base, int altura){
    return((base*altura)/2);
}

float per_circulo(int radio){
    return(2*3.1416*radio);
}

float a_circulo(int radio){
    return (3.1416*radio*radio);
}

float per_poligono(int n, int lado){
    return (n*lado);
}

float a_poligono(int n, int lado){
    return ((n*lado*lado)/(4*tan(3.1416/n)));
}
