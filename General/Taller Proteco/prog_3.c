#include<stdio.h>

struct estructura{
       int entero;
       int decimal;
       }est[2];
       
int main(int argc,char const *argv[])
{
       if(argc==5){      
       printf("Este es el nombre del programa %s\n",argv[0]);            
       est[0].entero=(int)*argv[1];
       est[0].decimal=(int)*argv[2];
       est[1].entero=(int)*argv[3];
       est[1].decimal=(int)*argv[4];
       
       printf("----------------\n");
       printf("Los parametros que ingresaste son :\n");
       printf("%c\n",est[0].entero);
       printf("%c\n",est[0].decimal);
       printf("%c\n",est[1].entero);
       printf("%c\n",est[1].decimal);
       }
       else{
            printf("No ingresaste 4 parametros\n");
       }
       getch();
       return 0;      
       
       //getch();
}
