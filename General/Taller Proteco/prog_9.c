#include<stdio.h> //manejo de erchivos uso del fprintf

main()
{
    FILE *pf;
    pf = fopen("texto.txt","w");
    
    if(pf==NULL)
       printf("\nError en la apertura del archivo");
    else
       printf("\nEl archivo fue creado");   
    
    fprintf(pf,"Estamos usando fprintf\n");                      }
       
    fclose(pf);
    //getch();

      }
