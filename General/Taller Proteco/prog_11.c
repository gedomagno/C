#include<stdio.h> //manejo de erchivos puedes escribir hasta un arroba

typedef struct disco{
        int anio;
        int tracks;
        char artista[30];
        char nombre[20];
        }Disco;

main()
{

    FILE *pf;
    Disco d1;
    pf = fopen("texto.txt","r");
    int i;
    char c;
    
    if(pf==NULL)
       printf("\nError en la apertura del archivo");
    else
       printf("\nEl archivo fue creado");   

    fscanf(pf,"\nDisco 1: \nNombre: %s\n Artista: %s\nTracks: %sAnio: %d",&d1.nombre,&d1.artista,&d1.tracks,&d1.anio); 
    printf("Se recupero del archivo el disco uno");       
    printf("Anio: %d Tracks: %d",d1.anio,d1.tracks);
    printf("Artista: %s \nNombre: %s",d1.artista,d1.nombre);
    
    fclose(pf);
    getch();
}
