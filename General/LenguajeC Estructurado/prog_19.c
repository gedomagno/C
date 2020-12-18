#include<stdio.h> // prg que genera un archivo con las opciones y numeros ingresados por el usuario

main (){
     FILE *mi_archivo;
     char nombre [20];
     int operacion,num1,num2,salir;
     
     printf("Dame el nombre del archivo a generar \t");     
     scanf("%s",nombre);
     
     mi_archivo=fopen(nombre,"w");
     if (mi_archivo==NULL){
         printf("Hubo un error al generar el archivo");                  
                          }         
     else {
         printf("Archivo generado con exito");    
          }
      
       while (salir!=0){
         printf("\nSeleccione la operacion a realizar \n1.Suma \n2.Resta \n3.Multiplicacion \n4.Division");                 
         scanf("%i",&operacion);

         switch(operacion){
               case 1:
               printf("Dame el primer valor");            
               scanf("%i",&num1);
               printf("Dame el segundo valor");            
               scanf("%i",&num2);
               break;
               
               case 2:
               printf("Dame el primer valor");            
               scanf("%i",&num1);
               printf("Dame el segundo valor");            
               scanf("%i",&num2);
               break;

               case 3:
               printf("Dame el primer valor");            
               scanf("%i",&num1);
               printf("Dame el segundo valor");            
               scanf("%i",&num2);
               break;
               
               case 4:
               printf("Dame el primer valor");            
               scanf("%i",&num1);
               printf("Dame el segundo valor");            
               scanf("%i",&num2);
               break;
                          
                            }          
               fprintf(mi_archivo, "%i %i %i \n", operacion, num1, num2);

               printf("\n\n Deseas salir del programa? 0)Si 1)No\n");
               scanf("%i", &salir);
                      }

       fclose(mi_archivo); // me cierra el archivo
       printf("\nArchivo cerrado \n");
       getch();                   
                                                    
     }
