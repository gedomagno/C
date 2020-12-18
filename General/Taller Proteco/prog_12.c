#include<stdio.h> //manejo de erchivos puedes escribir hasta un arroba

main()
{

    FILE *pf;
    pf = fopen("login.xt","r");
    char usuario[30],cont[30];
    char usr[30];
    
    if(pf==NULL)
       printf("\nError en la apertura del archivo");
    else
       printf("\nEl archivo fue creado");   

    printf("\nDame tu usuario:");
    fflush(stdin);
    scanf("%s",usr);
    
    printf("Dame tu contrasenia");
    fflush(stdin);
    scanf("%s",cont);
    
    fscanf(pf,"Nombre: %s Contraseña: %s",usuario,cont);
    
    if(strcmp(usr,usuario)== 0 strcmp( con,cont)==0)
       printf("\nBienvenido!!!\n\n);
    else
        printf("\nUsuario o contraseña incorrectas\n\n");
    fclose(pf);
    getch();
}
