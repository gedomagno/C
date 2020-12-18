/*Metodo de ordenamiento Quick Sort*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void intercambio(int*x,int*y);
void leerLista(int lista[],int n);
void imprimirLista(int lista[],int n);
void quicksort(int lista[],int m,int n);
int pivote(int r,int s);

void intercambio(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void leerLista(int lista[],int n){
    int i;
    srand(time(NULL));
    for(i=0;i<n;i++){
        lista[i]=rand()%501;    //genera numeros aleatorios hasta el 500
    }
}

void imprimirLista(int lista[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",lista[i]);
}

int pivote(int r,int s){
    return ((r+s)/2);
}

void quicksort(int lista[],int m,int n){
    int i,j,k,p;
    if(m<n){
        k=pivote(m,n);
        intercambio(&lista[m],&lista[k]);
        p=lista[m];
        i=m+1;
        j=n;

        while(i<=j){
            while((i<=n) && (lista[i]<=p))
                i++;
            while((j>=m) && (lista[j]>p))
                j--;

            if(i<j)
                intercambio(&lista[i],&lista[j]);
        }
        intercambio(&lista[m],&lista[j]);
        quicksort(lista,m,j-1);     //aplica quick sort al subarreglo izquierdo
        quicksort(lista,j+1,n);     //aplica quick sort al subarreglo derecho
    }

}

int main(){
    clock_t inicio;
    clock_t fin;
    inicio=clock();

    int lista[1000]={0};
    int n;
    printf("quicksort\n");
    printf("Cunatos elementos se van a ordenar?\n");
    scanf("%d",&n);

    leerLista(lista,n);
    printf("Lista antes de ordenar\n");
    imprimirLista(lista,n);
    quicksort(lista,0,n-1);
    printf("\nLista despues de ordenar\n");
    imprimirLista(lista,n);
    fin=clock();
    printf("\nTiempo de ejcucjion del algoritmo: %f segundos",(fin-inicio)/(double)CLOCKS_PER_SEC);
    printf("\n");

}
