#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ASTERISCOS 50
#define MENSAJE "Bienvenido a mi agenda"
#define MAX_NOMBRE 50
#define MAX_APELLIDO 50
#define MAX_TEL 14
#define MAX_REGISTROS 10

struct Persona{
	char nombre[MAX_NOMBRE];
	char apellido[MAX_APELLIDO];
	char genero;
	char tel[MAX_TEL];
	struct Persona *sig;
};

struct Persona agenda[MAX_REGISTROS];
struct Persona *inicio, *fin; 
int contador = 0;

void titulo();
void menu();
void insertar();
void buscar();
void modificar();
void eliminar();
void guardar();
void abrir();
void listar();

int main()
{
    titulo();
    printf("\n%s\n", MENSAJE);
    titulo();
    menu();
    int opcion = 0;
    int e = 1;
    do{
        printf("\nElije un numero de acuerdo a las opciones anteriores: ");
        scanf("\n%d", &opcion);
        if(opcion >= 6 && opcion <= 0)
        {
            printf("\nElije una opcion valida");
            continue;
        } else {
            switch(opcion){
            case 1:
                insertar();
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
            default:
                printf("Opcion desconocida");
                break;
            }
            printf("\nQuieres efectuar otra accion (Si = 1, No = 0): ");
            scanf("%d", &e);
        } /* else */
    }while( e == 1);

    return 0;
}

void titulo() {
    int cont;
    for(cont=0; cont <= MAX_ASTERISCOS; cont++){
            if((cont % 2) == 0){
                printf("%s", "*");
            } else {
                printf("%s", "-");
            } /* if */
    } /* for */
};

void menu(){
    printf("\nLas opciones de la aplicacion son las siguientes:");
    printf("\n1 - Insertar una nueva persona");
    printf("\n2 - Buscar a una persona");
    printf("\n3 - Modificar los datos de una persona");
    printf("\n4 - Eliminar los datos de una persona");
    printf("\n5 - Guardar la agenda");
    printf("\n6 - Abrir la agenda");
    printf("Elije una opcion: ");
}

void insertar(){
	struct Persona *per;
	per = (struct Persona *)malloc(sizeof(struct Persona));
	if(per == NULL)
	{
		printf("\nNo hay mas memoria");
		exit(1);
	}
	printf("Ingresa el nombre: ");
	char nombre[MAX_NOMBRE];
	scanf("%s", &nombre);	
	printf("Ingresa el apellido: ");
	char apellido[MAX_APELLIDO];
	scanf("%s", &apellido);
	printf("Ingresa el genero (M -masculino, F - femenino): ");
	char genero;
	scanf(" %c", &genero);
	printf("Ingresa el numero telefonico: ");
	char tel[MAX_TEL];
	scanf("%s", &tel);
	strcpy(per->nombre, nombre);
	strcpy(per->apellido, apellido);
	per->genero = genero;
	strcpy(per->tel, tel);
	per->sig = NULL;	
	if(inicio == NULL)
	{
		inicio = per;
		fin = per;
		printf("\nnull\n%p - %s %s, %c %s %p", per, per->nombre, per->apellido, per->genero, per->tel, per->sig);
		printf("\n%p - %s %s, %c %s %p", inicio, inicio->nombre, inicio->apellido, inicio->genero, inicio->tel, inicio->sig);
		printf("\n%p - %s %s, %c %s %p", fin, fin->nombre, fin->apellido, fin->genero, fin->tel, fin->sig);		
	} else {
		fin->sig = per;
		fin = per;
		printf("\n%p - %s %s, %c %s %p", per, per->nombre, per->apellido, per->genero, per->tel, per->sig);
		printf("\n%p - %s %s, %c %s %p", inicio, inicio->nombre, inicio->apellido, inicio->genero, inicio->tel, inicio->sig);
		printf("\n%p - %s %s, %c %s %p", fin, fin->nombre, fin->apellido, fin->genero, fin->tel, fin->sig);		
	}
	printf("\nDatos : %s %s, %c, %s", per->nombre, per->apellido, per->genero, per->tel);
	contador++;
	listar();
};

void listar(){
	struct Persona *p;
	for(p=inicio; p != NULL; p = p->sig){
		printf("\n%s %s, %c, %s", p->nombre, p->apellido, p->genero, p->tel);
	}
}

void buscar(){
	printf("ingresa el apellido a buscar: ");
	char temp[MAX_APELLIDO];
	scanf("%s", &temp);
	struct Persona *x;
	struct Persona *ap[10];
	int i, j=0;
	for(x = inicio; x != NULL; x = x->sig){
		if(strcmp(x->apellido, temp) == 0){
			ap[j] = x;
			j++;
			printf("\ndatos: %s %s, %c, %s", x->nombre, x->apellido, x->genero, x->tel);
		}
	}
	if(j == 0){
			printf("\n no existe el usuario");
	}
};
void modificar(){
	printf("EScriba el apellido de la persona a modificar: ");
	char mod[MAX_APELLIDO];
	scanf("%s", &mod);
	int i, j=0;
	struct Persona *t[10];
	struct Persona *p;
	for(p = inicio; p !=NULL; p = p->sig){
		if(strcmp(p->apellido, mod) == 0){
			t[j] = p;
			j++;
			printf("\n%d - %s %s, %c, %s", j, p->nombre, p->apellido, p->genero, p->tel);			
		}
	}
	printf("\nElija el numero de registro a modificar:");
	int val = 0;
	scanf("%d", &val);			
	printf("Dame el nombre de la persona: ");
	char nomb[MAX_NOMBRE];
	scanf("%s", &nomb);
	strcpy(t[val-1]->nombre, nomb);
	printf("Dame el apellido de la persona: ");
	char apell[MAX_APELLIDO];
	scanf("%s", &apell);
	strcpy(t[val-1]->apellido, apell);
	printf("Dame el genero de la persona: ");
	char gen;
	scanf(" %c", &gen);
	t[val-1]->genero = gen;
	printf("Dame el telefono de la persona: ");
	char tel[MAX_TEL];
	scanf("%s", &tel);
	strcpy(t[val-1]->tel, tel);
};
void eliminar(){};

void guardar(){};

void abrir(){};

