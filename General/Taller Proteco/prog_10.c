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
    pf = fopen("texto.txt","w");
    int i;
    char c;
    
    if(pf==NULL)
       printf("\nError en la apertura del archivo");
    else
       printf("\nEl archivo fue creado");   

    printf("\nIngresa el:");       
    printf("\n año del disco");       
    scanf("%d",&d1.anio);
    printf("\n Numero de canciones");       
    scanf("%d",&d1.tracks);
    
    fflush(stdin);
    printf("\nArtista:");
    scanf("%s",d1.artista);
    
    fflush(stdin);
    printf("\nNombre del disco:");
    scanf("%s",d1.nombre);
    
    fflush(stdin);

    fprintf(pf,"\nDisco 1: \nNombre: %s\n Artista: %s\nTracks: %sAnio: %d",d1.nombre,d1.artista,d1.tracks,d1.anio);
    
    fclose(pf);

}
