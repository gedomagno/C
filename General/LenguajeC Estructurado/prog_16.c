#include<stdio.h> //manejo de ficheros
main(){
       FILE *mi_archivo;
       mi_archivo=fopen("archivo.txt", "w");
       char cadena[100]="Esto es una prueba de archivos";
       
       fprintf(mi_archivo,cadena);
       fprintf(mi_archivo,"%s","\n Esto es otra cadena dentro del archivo");
       fclose(mi_archivo);
       }
