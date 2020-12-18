#include<stdio.h> // generacion de un archivo

main(){
       FILE *mi_archivo;
       char nombre[20];
       char operacion[20];
       int num1,num2,salir=1;
       
       printf("Dame el nombre del archivo");
       scanf("%s",nombre);
       mi_archivo=fopen(nombre,"w"); //me abre o genera un archivo, el argumento w puede ser de otro modo
       
       if(mi_archivo==NULL){
          printf("Hubo un error al crear el archivo");                            
                            }
       else{
          printf("Archivo creado con exito \n"); 
          
       while(salir!=0){
             printf("Dame una operacion:");          
             scanf("%s",operacion);
             printf("Dame el primer valor:");
             scanf("%i",&num1);
             printf("Dame el segundo valor:");
             scanf("%i",&num2);
             fprintf(mi_archivo, "%s %i %i \n", operacion,num1,num2); //IMprime en el archivo 
             printf("\n\n Deseas salir del programa? 0)Si 1)No\n");
             scanf("%i", &salir);
                          }
          }                                          
    
       fclose(mi_archivo); // me cierra el archivo
       printf("\nArchivo cerrado \n");
       getch();
       }
       
       
