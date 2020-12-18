/*Se muestran las direcciones y valores de una variable y su apuntador*/

#include<stdio.h>

int main(){

    int num=10;
    int*app;
    app=&num;        //el apuntador apunta a la variable num

    printf("\n El valor de la variable num es %i", num);
    printf("\n La variable a esta guardada en la direccion: %p", &num);
    printf("\n El valor de la variable app es %p", app);
    printf("\n La variable app esta guardada en la direccion de memoria: %p", &app);

return 0;
}
