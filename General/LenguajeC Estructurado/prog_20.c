#include<stdio.h> // prg que lee el archivo menu.txt y me presenta el valor de la operacion

main (){
     FILE *mi_archivo;
     char nombre [20];
     int operacion,num1,num2;
     
     printf("Dame el nombre del archivo a abrir\t");     
     scanf("%s",nombre);
     
     mi_archivo=fopen(nombre,"r");
     
     if(mi_archivo==NULL)
        printf("Hubo un error al abrir el archivo");                            
     else{
          printf("Archivo abierto con exito \n"); 
          rewind(mi_archivo);  // volver a la primera linea de nuestro archivo
          
          do {
              fscanf(mi_archivo,  "%i %i %i", &operacion, &num1,&num2);  //fscanf lee de mi archivo        
              if(feof(mi_archivo)==0)  //feof: find enf of file
                 {
                  switch(operacion){
                    case 1:
                    printf("El valor de %i es: %i \n", operacion,(num1+num2));            
                    break;
               
                    case 2:
                    printf("El valor de %i es: %i \n", operacion,(num1-num2));            
                    break;

                    case 3:
                    printf("El valor de %i es: %i \n", operacion,(num1*num2));            
                    break;
               
                    case 4:
                    printf("El valor de %i es: %i \n", operacion,(num1/num2));            
                    break;
                                   }                              
                 }
             }while(feof(mi_archivo)==0);
          }                                          
       fclose(mi_archivo); // me cierra el archivo
       printf("\nArchivo cerrado \n");
       getch();
       }
       
