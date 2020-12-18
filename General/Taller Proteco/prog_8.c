#include<stdio.h> //manejo de erchivos uso del feof

main()
{
    FILE *pf;
    char arch[20];
    printf("\nDame el archivo que quieres abrir: ");
    scanf("%s",arch);
    
    pf = fopen("texto.txt","r");
    
    if(pf==NULL)
       printf("\nError en la apertura del archivo");
    else
       printf("\nEl archivo fue creado");   
    
    while(feof(pf)==0)
    {
      printf("%c",fgetc(pf));                      
                      }
       
    fclose(pf);
    getch();

      }
