#include<stdio.h> //manejo de erchivos uso del fgets

main()
{
    FILE *pf;
    pf = fopen("texto.txt","r");
    
    if(pf==NULL)
       printf("\nError en la apertura del archivo");
    else
       printf("\nEl archivo fue creado");   
    
    int i;
    char c[30];
    printf("\n\nLos primeros 10 caracteres de nuestro archivo son: \n\n");
    fgets(c, 30, pf);
    printf("%s",c);

       
    fclose(pf);
    getch();

      }
