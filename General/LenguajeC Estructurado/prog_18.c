#include<stdio.h> // lectura de un archivo existente 

main(){
       FILE *mi_archivo;
       char nombre[20];
       char operacion[20];
       int num1,num2,salir=1;
       
       printf("Dame el nombre del archivo");
       scanf("%s",nombre);
       mi_archivo=fopen(nombre,"r"); //me abre o genera un archivo, el argumento r es para leer
       
       if(mi_archivo==NULL){
          printf("Hubo un error al abrir el archivo");                            
                            }
       else{
          printf("Archivo abierto con exito \n"); 
          
       rewind(mi_archivo);  // volver a la primera linea de nuestro archivo
      
       do {
           fscanf(mi_archivo,  "%s %i %i", operacion, &num1,&num2);  //fscanf lee de mi archivo        
              if(feof(mi_archivo)==0)  //feof: find enf of file
                 printf("La operacion es %s, y los datos son %i y %i \n", operacion, num1, num2);
          }while(feof(mi_archivo)==0);
          }       
                                             
       fclose(mi_archivo); // me cierra el archivo
       printf("\nArchivo cerrado \n");
       getch();
       }
       
       
