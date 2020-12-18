/*Lista ligada. Se agregan elementos al final de la lista*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;             //campo dato
    struct node*sig;    //campo siguiente nodo
}Node,*NodePuntero;     //Node es una variable de tipo de dato node, NodePuntero guarda una direccion del tipo node

void imprimirLista(NodePuntero top){
    printf("lista ligada");
    while(top!=NULL)
        {
            printf("%d",top->num);
            top=top->sig;
        }
}

int main(){
    int n;
    NodePuntero top,nuevo,last; // top es la cabeza, last a cola
    printf("Lista ligada insertando por el final");
    top =NULL;  //como la lista mo tiene nodos al principio, top apunta a null
    printf("INgrese un numero en la lista (para terminar ingrese cero)\n");

    if(scanf("%d",&n)!=1)   //leyendo el numero
        n=0;

    while(n !=0)
    {
        nuevo=(Node*)malloc(sizeof(Node));  //reservamos memoria en  nuevo nodo
        nuevo -> num=n;                     //el numero se almacena en campo dato
        nuevo -> sig = NULL;                //Siempre hace referencia a NULL por ser el ultimo nodo

       //aun no creamos la lista solo el nodo
        if(top==NULL)
        {
            top=last=nuevo;
        }
        else{
            last ->sig=nuevo;   //La direccion del ultimo nodo apunta a null
            last =nuevo;        //last tiene null
            }
        printf("Dame el sig numero\n");

        if(scanf("%d",&n)!=1)
            n=0;
        }
        imprimirLista(top);

}
