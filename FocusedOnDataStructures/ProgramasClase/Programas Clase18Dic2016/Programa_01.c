/*Algoritmo por seleccion*/

#include<stdio.h>
#include<stdlib.h>

int minimo(int*a, int tamano);  //funcion para encontrar el minimo de un arreglo

int main(){
    int a[8]={40,20,1,6,10,13,2,3}; //el nombre de un arreglo es un apuntador al primer elemento del arreglo
    int*p_a;
    p_a=a;  //hago que mi apuntador apunte al primer elemento del arreglo

    int var1=0;
    var1=minimo(p_a, 8);
    printf("El indice del minimo es %d\n", var1);

return 0;
}

int minimo(int*p_a, int tamano){
    int aux=0;
    for(i=0;i<tamano;i++){
    if(p_a>p_a++)
        aux=i;
    else p_a++;
    }
    printf("El minimo es %d y su indice es ");
    }


/*    p_a
    int r=0;
    r=a[0];
    int i, indice;
    indice=0;
    for(i=0;i<tamano-1;i++){
        if(r>a[i]){
           // r=a[i];
            indice=i;
        }
        return indice;
    }
    */
    int i=0;
    for(i=0;i<tamano;i++){
        printf("Elemento[%d]: %d\n",i,*p_a);
        p_a++;

    }
/*    for(i=0;i<tamano;i++)

        int *p,*a,m,n,aux;
        int m=minimo(p,tam-n);
        aux=a[i];
        a[i]=a[m];
        a[m]=aux;
        n++;
        p++;
        printf("posicion actual de p %p\n",p);

return indice;
*/
}
