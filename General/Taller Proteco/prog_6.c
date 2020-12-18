#include<stdio.h> //manejo de erchivos

main()
{
    FILE *pf;
    pf = fopen("texto.txt","r");
    
    if(pf==NULL)
       printf("\nError en la apertura del archivo");
    else
       printf("\nEl archivo fue creado");   
    
    int i;
    char c;
    printf("\n\nMI archivo contiene: \n\n");
    while(!feof(pf)) // este while sirve para determinar el fin del archivo
       {
        c=fgetc(pf);
        printf("%c",c);
       }
       
    fclose(pf);
    getch();

      }
