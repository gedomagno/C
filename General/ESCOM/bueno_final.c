#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ASTERISCOS 50
#define MENSAJE "Bienvenido a mi agenda"
#define MAX_NOMBRE 50
#define MAX_APELLIDO 50
#define MAX_TEL 14
#define MAX_REGISTROS 10
#define NOMB_ARCH "agenda.csv"

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
void guardar(const char *archivo, const char *modo);
void abrir(const char *archivo, const char *modo);
void listar();
char *quitaEtiqueta(char cad[]);
struct Persona *creaPersona(char * cad);

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
                guardar(NOMB_ARCH, "w");
                printf("Archivo guardado en el archivo!\n");
                break;
            case 6:
                abrir(NOMB_ARCH, "r");
                printf("%d registros leidos y cargados en memoria\n", contador);
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
	} else {
		fin->sig = per;
		fin = per;
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
	struct Persona *ap;
	int j = 0;
	for(ap = inicio; ap != NULL; ap = ap->sig){
		if(strcmp(ap->apellido, temp) == 0){
			printf("\n%d: %s %s, %c, %s", j+1, ap->nombre, ap->apellido, ap->genero, ap->tel);
		}
		j++;
	}
	if(j == 0){
			printf("\n no existe el usuario");
	}
};

void modificar(){
	printf("Escriba el apellido de la persona a modificar: ");
	char mod[MAX_APELLIDO];
	scanf("%s", &mod);
	int i, j=0;
	struct Persona *t;
	struct Persona *relacion[10];
	for(t = inicio; t != NULL; t = t->sig){
		if(strcmp(t->apellido, mod) == 0){
			relacion[j++] = t;
			printf("\n%d - %s %s, %c, %s", j, t->nombre, t->apellido, t->genero, t->tel);			
		}
	}
	printf("\nElija el numero de registro a modificar:");
	int val = 0;
	scanf("%d", &val);		
	printf("Dame el nombre de la persona: ");
	char nomb[MAX_NOMBRE];
	scanf("%s", &nomb);
	strcpy(relacion[val-1]->nombre, nomb);
	printf("Dame el apellido de la persona: ");
	char apell[MAX_APELLIDO];
	scanf("%s", &apell);
	strcpy(relacion[val-1]->apellido, apell);
	printf("Dame el genero de la persona: ");
	char gen;
	scanf(" %c", &gen);
	relacion[val-1]->genero = gen;
	printf("Dame el telefono de la persona: ");
	char tel[MAX_TEL];
	scanf("%s", &tel);
	strcpy(relacion[val-1]->tel, tel);
	listar();
};

void eliminar(){
	printf("Escriba el apellido de la persona a eliminar: ");
	char mod[MAX_APELLIDO];
	scanf("%s", &mod);
	int i, j=0;
	struct Persona *t;
	struct Persona *relacion[10];
	for(t = inicio; t != NULL; t = t->sig){
		if(strcmp(t->apellido, mod) == 0){
			relacion[j++] = t;
			printf("\n%d - %s %s, %c, %s", j, t->nombre, t->apellido, t->genero, t->tel);			
		}
	}
	printf("\nElija el numero de registro a eliminar:");
	int val = 0;
	scanf("%d", &val);
	struct Persona *dato = relacion[val -1];
	struct Persona *actual;
	struct Persona *anterior;
	for(actual = inicio, anterior = actual; actual != NULL; actual = actual->sig){
		if(actual == dato){
			printf("encontrado");
			if(actual == anterior){
				inicio = dato->sig;
				free(dato);			
			} else if(actual == fin) {
				anterior->sig = NULL;
				free(dato);
			} else {
				anterior->sig = dato->sig;
				free(dato);
			}
			contador--;
			printf("Persona eliminada");			
			break;
		}
		anterior = actual;
	}
	listar();	
};

void guardar(const char nomb[], const char modo[]){
	FILE *a;
	if((a = fopen(nomb, modo)) == NULL){
		printf("Hay un error con el archivo");
		return;
	} else {
		struct Persona *p;
		for(p = inicio; p != NULL; p = p->sig){
			char *t;
			t = (char *)malloc(sizeof(struct Persona));
			sprintf(t, "\"%s\",\"%s\",\"%c\",\"%s\"", p->nombre, p->apellido, p->genero, p->tel );
			printf("%s", t);			
			fputs(t, a);
			fputs("\n", a);
		}		
	}
	fclose(a);
};

void abrir(const char nomb[], const char modo[]){
	FILE *a;
	inicio = fin = NULL;
	contador = 0;
	if((a = fopen(nomb, modo)) == NULL){
		printf("Hay un error con el archivo");
		return;
	} else {
		while(!feof(a)){
			struct Persona *per;
			char buf[MAX_NOMBRE + MAX_APELLIDO + 10 + MAX_TEL] = {0};
			fgets(buf, sizeof(buf), a);
			if(strlen(buf) ==0)
				break;
			//fscanf(a, "%[^,], %[^,], %[^,], %c", nomb, apell, tel, &gen);
			per = creaPersona(buf);
			per->sig = NULL;	
			if(inicio == NULL)
			{
				inicio = per;
				fin = per;
			} else {
				fin->sig = per;
				fin = per;
			}
			contador++;
		}				
	}
	fclose(a);	
};

char *quitaEtiqueta(char *p){
	if(p[0] == '"'){
		if(p[strlen(p)-1] == '"'){
			p[strlen(p)-1] = '\0';
		}
		p++;
	}
	return p;
}

struct Persona *creaPersona(char * cad){
			struct Persona *t;
			t = (struct Persona *)malloc(sizeof(struct Persona));
			char *nomb;
			char *apell;
			char *gen;
			char *tel;
			nomb = strtok(cad, ",");
			apell = strtok(NULL, ",");
			gen = strtok(NULL, ",");
			tel = strtok(NULL, ",");
			strcpy(t->nombre, quitaEtiqueta(nomb));
			strcpy(t->apellido, quitaEtiqueta(apell));
			t->genero = quitaEtiqueta(gen)[0];
			tel[strlen(tel)-1] = '\0';
			strcpy(t->tel, quitaEtiqueta(tel));
			printf("Datos leidos %d: %s,%s,%c,%s\n", contador+1,  t->nombre, t->apellido, t->genero, t->tel);
			t->sig = NULL;	
			return t;
}

