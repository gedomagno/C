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
};

struct Persona agenda[MAX_REGISTROS];
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
	if(contador >= MAX_REGISTROS){
		printf("sorry, agenda llena");
		return;
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
	struct Persona per;
	strcpy(per.nombre, nombre);
	strcpy(per.apellido, apellido);
	per.genero = genero;
	strcpy(per.tel, tel);
	printf("Datos : %s %s, %c, %s", per.nombre, per.apellido, per.genero, per.tel);
	agenda[contador] = per;
	contador++;
	listar();
};

void listar(){
	int i;
	for(i=0; i < contador; i++){
		printf("\n%s %s, %c, %s", agenda[i].nombre, agenda[i].apellido, agenda[i].genero, agenda[i].tel);
	}
}
void buscar(){
	printf("ingresa el apellido a buscar: ");
	char temp[MAX_APELLIDO];
	scanf("%s", &temp);
	struct Persona x[MAX_REGISTROS];
	int i, j=0;
	for(i = 0; i < MAX_REGISTROS; i++){
		if(strcmp(agenda[i].apellido, temp) == 0){
			x[j] = agenda[i];
			j++;
			printf("\ndatos: %s %s, %c, %s", agenda[i].nombre, agenda[i].apellido, agenda[i].genero, agenda[i].tel);
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
	struct Persona t[MAX_REGISTROS];
	int relacion[10] = {0};
	for(i = 0; i < MAX_REGISTROS; i++){
		if(strcmp(agenda[i].apellido, mod) == 0){
			t[j] = agenda[i];
			relacion[j++] = i;
			printf("\n%d - %s %s, %c, %s", j, agenda[i].nombre, agenda[i].apellido, agenda[i].genero, agenda[i].tel);			
		}
	}
	printf("\nElija el numero de registro a modificar: ");
	int val = 0;
	scanf("%d", &val);		
	struct Persona elegido; 
	int indice = relacion[val-1];
	printf("Dame el nombre de la persona: ");
	char nomb[MAX_NOMBRE];
	scanf("%s", &nomb);
	strcpy(elegido.nombre, nomb);
	printf("Dame el apellido de la persona: ");
	char apell[MAX_APELLIDO];
	scanf("%s", &apell);
	strcpy(elegido.apellido, apell);
	printf("Dame el genero de la persona: ");
	char gen;
	scanf(" %c", &gen);
	elegido.genero = gen;
	printf("Dame el telefono de la persona: ");
	char tel[MAX_TEL];
	scanf("%s", &tel);
	strcpy(elegido.tel, tel);
	agenda[indice] = elegido;
};
void eliminar(){};
void guardar(){};
void abrir(){};

