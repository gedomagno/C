/*Programa que despliega un menu y calcula el perimetro y area de figuras, utilizando las funciones definidas el archivo areas.h*/

#include"areas.h" //cabecera que yo definí

int main(){
    int lado=0, base=0, altura=0, radio=0;
    int n=0;    //numero de lados
    int op1=0, op2=0;

    printf("\t Seleccione la opcion deseada");
    printf("\n\n 1) Calculo de perimetros");
    printf("\n 2) Calculo de areas \n");
    scanf("%d", &op1);

    if(op1==1){
        printf("\n Seleccione la figura deseada");

        printf("\n 1) Cuadrado");
        printf("\n 2) Rectangulo");
        printf("\n 3) Triangulo");
        printf("\n 4) Circulo");
        printf("\n 5) Poligono regular \n ");
        scanf("%d", &op2);

        switch(op2){
        case 1:
            printf("Introduzca la longitud del lado ");
            scanf("%d", &lado);
            printf("El perimetro del cuadrado es %d",per_cuadrado(lado));
            break;

        case 2:
            printf("Introduzca la base del rectangulo ");
            scanf("%d", &base);
            printf("Introduzca la altura del rectangulo ");
            scanf("%d", &altura);
            printf("El perimetro del rectangulo es %d", per_rectangulo(base, altura));
            break;

        case 3:
            printf("Inroduzca el lado del triangulo ");
            scanf("%d", &lado);
            printf("El perimetro del triangulo es %i", per_triangulo(lado));
            break;

        case 4:
            printf("Introduzca el radio del circulo");
            scanf("%d", &radio);
            printf("El perimetro del circulo es %f", per_circulo(radio));
            break;

        case 5:
            printf("Introduzca el numero de lados del poligono ");
            scanf("%d", &n);
            printf("Introduzca la longitud de cada lado ");
            scanf("%d", &lado);
            printf("El perimetro del poligono es %f", per_poligono(n, lado));
            break;

        default:
            printf("Verifeque su seleccion ");
            break;
        }

        } else if(op1==2) {

        printf("\n Seleccione la figura deseada");

        printf("\n 1) Cuadrado");
        printf("\n 2) Rectangulo");
        printf("\n 3) Triangulo");
        printf("\n 4) Circulo");
        printf("\n 5) Poligono regular");
        scanf("%d", &op2);

        switch(op2){
        case 1:
            printf("Introduzca la longitud del lado ");
            scanf("%d", &lado);
            printf("El area del cuadrado es %d",a_cuadrado(lado));
            break;

        case 2:
            printf("Introduzca la base del rectangulo ");
            scanf("%d", &base);
            printf("Introduzca la altura del rectangulo ");
            scanf("%d", &altura);
            printf("El area del rectangulo es %i", a_rectangulo(base, altura));
            break;

        case 3:
            printf("Inroduzca la base del triangulo ");
            scanf("%d", &base);
            printf("Introduzca la altura del triangulo ");
            scanf("%d", &altura);
            printf("El area del triangulo es %f", a_triangulo(base, altura));
            break;

        case 4:
            printf("Introduzca el radio del circulo");
            scanf("%d", &radio);
            printf("El area del circulo es %f", a_circulo(radio));
            break;

        case 5:
            printf("Introduzca el numero de lados del poligono ");
            scanf("%d", &n);
            printf("Introduzca la longitud de cada lado ");
            scanf("%d", &lado);
            printf("El area del poligono es %f", a_poligono(n, lado));
            break;

        default:
            printf("Verifeque su seleccion ");
            break;
        }
        }

return 0;
}
