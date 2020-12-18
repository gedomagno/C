/*Cola*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nodoLista{
    int x;
    struct nodoLista*siguiente;
}lista;

void insertar(lista**inicio,int y);
lista* crearnodo(void);
void error();
int borrar(lista*inicio); //para borrar el primer nodo



int main(){
    lista*inicio=NULL;
    lista*fin=NULL;



    insertar(&inicio,8);
    printf("%p\n",inicio);
    printf("%p\n",inicio->siguiente);
    printf("%d\n",inicio->x);

return 0;
}

void insertar(lista**inicio,int y){
    lista*p=*inicio;
    lista*fin=*inicio;
    lista*q=crearnodo();
    if(*inicio==NULL){  //caso en que sea el primer nodo
        q->x=y;
        q->siguiente=NULL;
        *inicio=q;
   }else{           //caso en que sean nodos subsecuentes
        while(fin->siguiente!=NULL){
        fin=fin->siguiente;
        q->x=y;
        fin->siguiente=q;
        q->siguiente=NULL;
   }
}

lista* crearnodo(void){
    lista*q;
    q=(lista*)malloc(sizeof(lista));
    if(q!=NULL)
          printf("Exito\n");
    else error();
    return q;
}

void error(){
    printf("Error\n");
}

int borrar(lista**inicio){ //para borrar el primer nodo
    int j;
    lista*otro=*inicio;
    lista*aux=*inicio;
    if(inicio==NULL){
         printf("No hay cola\n");
         j=0;
    }else{
        aux=aux->siguiente;
        otro->siguiente=NULL;
        j=otro->x;
        free(otro);
        *inicio=aux;
    }
return j;
}
