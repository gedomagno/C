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
    printf("\n\nLos primeros 10 caracteres de nuestro archivo son: \n\n");
    for(i=0;i<10;i++)
       {
        c=fgetc(pf);
        printf("%c",c);
       }
       
    fclose(pf);
    getch();

      }
