#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_ASTERISCOS 50
#define MENSAJE "Bienvenido a mi agenda"
#define MAX_NOMBRE 50
#define MAX_APELLIDO 50
#define MAX_TEL 14
#define MAX_REGISTROS 10

struct Persona {
    char nombre[MAX_NOMBRE];
    char apellido[MAX_APELLIDO];
    char genero;
    char tel[MAX_TEL];
};
struct Persona agenda[MAX_REGISTROS];    //arreglo de estructuras del tipo Persona
int contador=0;             //esta variable cuenta las personas que ingreso en la base de datos

void titulo();
void menu();
void ingresar();
void buscar();
void modificar();
void eliminar();
void guardar();
void abrir();
void listar();

int main(){
    int opcion=0;
    int e=1;

    titulo();       //imprime los asteriscos
    printf("\n%s\n",MENSAJE);
    titulo();

while(e!=0){

    menu();
    printf("\n Eliga una opcion ");
    scanf("%i", &opcion);

    switch(opcion){
case 1:
    ingresar();
    break;
case 2:
    buscar();
    break;
case 3:
    modificar();
    break;
case 4:
    eliminar();
    break;
case 5:
    guardar();
    break;
case 6:
    abrir();
    break;
case 7:
    listar();
    break;
default:
    printf("Verifique su eleccion ");
    }
printf("\n\n Desea realizar otra operacion? 1.si, 0.no ");
scanf("%i", &e);
}

return 0;
}

void titulo(){  //imprime asteriscos y guiones
    int cont;
    for(cont=0;cont<MAX_ASTERISCOS;cont++){
        if(cont%2==0){
            printf("%c", '*');
        }else{
            printf("%c", '-');
        }
    }
}

void menu(){
    printf("\n Eliga la opcion deseada");
    printf("\n 1. Ingresar una nueva persona");
    printf("\n 2. Buscar una persona");
    printf("\n 3. Modificar los datos de una persona");
    printf("\n 4. Eliminar los datos de una persona" );
    printf("\n 5. Guardar la agenda");
    printf("\n 6. Abrir la agenda");
    printf("\n 7. Listar la agenda");
}

void ingresar(){

    if(contador>MAX_REGISTROS){
        printf("La agenda esta llena");
        return;                 //regresa el control de la funcion ingresar al main
    }

    struct Persona per;         //variable del tipo Persona de nombre
    char nombre[MAX_NOMBRE];
    char apellido[MAX_APELLIDO];
    char genero;
    char telefono[MAX_TEL];

    printf("\n Ingrese el nombre ");
    scanf("%s", &nombre);
    printf("\n Ingrese el apellido ");
    scanf("%s", &apellido );
    printf("\n Ingrese el genero M.Masculino, F.Femenino ");
    scanf(" %c", &genero);
    printf("\n Ingrese el telefono ");
    scanf("%s", &telefono);

    strcpy(per.nombre, nombre);         //paso lo que tiene nombre al campo nombre de la variable del tipo Persona (Esctructura)
    strcpy(per.apellido, apellido);
    //strcpy(per.genero, genero);
    per.genero=genero;              //aqui no ocupo strcpy porque solo es un caracter
    strcpy(per.tel, telefono);

//    printf("\nDatos:\n Nombre: %s\n Apellido: %s\n Genero %c\n Telefono %s",per.nombre,per.apellido,per.genero,per.tel);

    agenda[contador]=per;          //lo que hay en la variable per (tipo estructura) guardalo como el primer elemento en el arreglo de estructuras agenda
    contador++;
    listar();
}

void listar(){

    int i=0;
    for(i=0;i<contador;i++)
    printf("\n %i)%s, %s, %c, %s, " ,i+1,agenda[i].nombre,agenda[i].apellido,agenda[i].genero,agenda[i].tel);

}
void buscar(){          //se utiliza un arreglo "temporal" (Almacen) para almacenar las coincidencias

    struct Persona almacen[MAX_REGISTROS];          //aqui almaceno los datos encontrados
    char apellido[MAX_APELLIDO];
    printf("Introduzca el apellido a buscar ");
    scanf("%s",&apellido);
    int i=0, j=0;

    for(i=0;i<MAX_REGISTROS;i++){       //  for que recorre el arreglo de estructuras llamado agenda
            if(strcmp(agenda[i].apellido,apellido)==0) {   //el cero implica que las cadenas son iguales
                almacen[j]=agenda[i];                       //el elemento i de agenda se guarda en el elemento j de almacen
                printf("\n %s,%s,%c,%s: ",almacen[j].nombre,almacen[j].apellido,almacen[j].genero,almacen[j].tel);      //imprimo los elementos del arreglo temporal
                j++;
    }
    }
    if(j==0)
            printf("No existen coincidencias ");
}

void modificar(){
    struct Persona Almacen[MAX_REGISTROS];         //arreglo "temporal" de estructuras del tipo persona

    char apellido[MAX_APELLIDO];                   //pedir el apellido a modificar
    printf("Introduzca el apellido que quiere modificar ");
    scanf("%s", &apellido);
    int i=0;                                        //indice para recorrer mi agenda
    int j=0;                                       //indice para recorrer el arreglo de estructuras temporal

    for(i=0;i<MAX_REGISTROS;i++){                  //recorro mi agenda buscando el apellido solicitado
        if(strcmp(agenda[i].apellido,apellido)==0) {   //si hay igualdad entre lo buscado y la agenda entonces almacenalo en un arreglo de estructuras temporal
//            Almacen[j]=agenda[i];
//            j++;
//            printf("Lo elementos encontrados son\n ");
            printf("\n %i,%s,%s,%c,%s", i+1, agenda[i].nombre, agenda[i].apellido,agenda[i].genero,agenda[i].tel);
    }
    }
//    printf("\n Los elementos encontrados fueron\n");
//    for(i=0;i<j;i++)                   //imprimo los elementos coincidentes que fueron guardados en un arreglo "temporal"
//    printf("%i,%s,%s,%c,%s", i+1, Almacen[i].nombre, Almacen[i].apellido,Almacen[i].genero,Almacen[i].tel);

    int sel=0;
    printf("\n Seleccione el registro a modificar ");
    scanf("%i", &sel);

    printf("Ingrese el nombre ");
    scanf("%s",&agenda[sel-1].nombre);      //aqui resto 1 a sel debido a que el elemento impreso en agenda esta dado por i+1 y no solo por i
    printf("Ingrese el apellido ");
    scanf("%s", &agenda[sel-1].apellido);
    printf("Ingrese el genero ");
    scanf(" %c", &agenda[sel-1].genero);
    printf("Ingrese el telefono ");
    scanf("%s", &agenda[sel-1].tel);

    printf("\n Los cambios han sido realizados ");
}
void eliminar(){
        char apellido[MAX_APELLIDO];
        int sel=0;
        printf("Ingrese el apellido a eliminar ");
        scanf("%s", &apellido);
        int i=0;

        for( i=0;i<MAX_REGISTROS;i++){
            if(strcmp(agenda[i].apellido,apellido)==0){
                printf("\n %i),%s,%s,%c,%s",i+1,agenda[i].nombre,agenda[i].apellido,agenda[i].genero,agenda[i].tel);
            }
        }
        printf("\n Seleccione el numero de registro a eliminar ");
        scanf("%i",&sel);

//        agenda[sel-1].nombre=" ";                 //¿por que no puedo asignar solamente asi?
          strcpy(agenda[sel-1].nombre, " ");
          strcpy(agenda[sel-1].apellido, " ");
          agenda[sel-1].genero=' ';
          strcpy(agenda[sel-1].tel, "");

        printf("El registro seleccionado ha sido eliminado");
}

void guardar(){
    printf("\n Los cambios han sido guardados correctamente");
}
void abrir(){

}
