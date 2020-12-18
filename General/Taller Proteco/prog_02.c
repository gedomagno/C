#include<stdio.h> //depliega un menu y pide datos
#include<stdlib.h>

struct alumno
{
       long int nro_cuenta;
       int edad;
       char nombre[100];
       char carrera[100];
       }grupo_1;
       
void leer(struct alumno *grupo){
     printf("--------\n");
     printf("\n\nDatos del alumno\n");
     printf("\n\nNumero de cuenta\n");
     scanf("%ld",&grupo->nro_cuenta);
     printf("Edad\n");
     scanf("%ld",&grupo->edad);
     printf("Nombre\n");
     scanf("%ld",grupo->nombre);
     getchar();
     printf("Carrera\n");
     scanf("%ld",grupo->carrera);
     getchar();
     }
     
void mostrar(struct alumno *grupo){
     printf("-------");
     printf("\n\nDatos del alumno\n");
     printf("Numero de cuenta: ld\n",grupo->nro_cuenta);
     printf("Edad: %d\n",grupo->edad);
     printf("Nombre: %d\n",grupo->nombre);
     printf("Edad: %d\n",grupo->carrera);
     }
     
void menu(struct alumno grupo){
     int select;
     printf("--------\n");
     printf("Opciones disponibles\n");
     printf("1.ingresa los datos del alumno\n");
     printf("2.Ver datos del alumno\n");
     printf("3 Salir\n");
     printf("Seleccione:\n");
     scanf("%d",&select);
     switch(select){
            case 1:
            leer(*grupo_1);
            menu();
            break;                   
            
            case 2:
            mostrar(*grupo_1);
            menu();
            break;                   

            case 3:
            exit(0);
            break;                   
            
            default:
            printf("La opcion no esta en el menu");
            menu();
                   }
     
  }     
  
  int main(int argc,char const* argcv[])
  {
      menu(grupo_1);
      return 0;
      }
     
         
                  
      
