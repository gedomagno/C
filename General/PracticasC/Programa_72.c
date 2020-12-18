/*Prorama que muestra el uso del & y * con apuntadores*/

int main(){
    int a=10;
    int*ptr=&a;

    printf("\n El valor de a es %i", a);
    printf("\n a esta guardada en la direccion %p", &a);
    printf("\n a esta guardada en la direccion %x", &a);
    printf("\n La direccion almacenada en ptr es %p", ptr);

    ptr++;

    printf("\n La nueva direccion de ptr es %p ", ptr);     //se avanza 4 bytes porque es un apuntador a entero

    /////////operaciones con apuntadores///////

    int b[10]={0,1,2,3,4,5,6,7,8,9};

    int*ap1B=&b;

    printf("\n El contenido de la casilla apuntada por ap1B es %i", *ap1B);    //aqui debe de salir cero ya que es el primer elemento del arreglo
    int*apB1=b;         //aqui anclo el apuntador al primer elemento de mi arreglo
    printf("\n El contenido de la casilla apuntada por ap1B es %i", *ap1B);    //aqui debe de salir cero ya que es el primer elemento del arreglo

    ap1B=ap1B+1;        //suma de entero a un apuntador

    printf("\n Despues de sumarle 1 a ap1B, éste apunta al segundo elemento del arreglo, %i", *ap1B);

return 0;
}
