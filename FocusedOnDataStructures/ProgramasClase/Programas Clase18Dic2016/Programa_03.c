/*Metodo de busqueda binaria*/

#include<stdio.h>

int busqueda(int array[],int v, int tam);   //funcion para buscar


int main(){

    int arreglo[]={1,2,3,4,5,6,7,8,9,10};



return 0;
}

int busqueda(int array[],int v, int tam){   //funcion para buscar
    int mitad, inf=0, sup=tam-1;
    if(tam==0) return -1;

    do{
        mitad=(inf+sup)/2;
        if(v>array[mitad])
            inf=mitad+1;
        else
            sup=mitad-1;
   }while (array[mitad]!=v && inf<=sup)

   if (array[mitad]==v) {
        return mitad;
   }else return -1;
}
