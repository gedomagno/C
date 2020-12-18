/*Libreria de nombre areaperimetro.h para ser utilizada en el programa 43
El contenido de esta libreria son dos funciones, una que calcula el area y otra el perimetro
NO HAY FUNCION MAIN, solo la libreria stdio.h*/

#include<stdio.h>

int perimetro(int lado){ //funcion que calcula el perimetro de un cuadrado
return (4*lado);
}

int area(int lado){ //funcion que calcula el area de un cuadrado

return (lado*lado);
}
