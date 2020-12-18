/*Suma de dos matrices*/
#include<stdio.h>

int main(){
    int matriz1[2][3];
    int matriz2[2][3];
    int summatriz[2][3];

    int i=0,j=0;

    for(i=0;i<2;i++){       //llenado de matriz1
        for(j=0;j<3;j++)
            scanf("%d",&matriz1[i][j]);
    }

    for(i=0;i<2;i++){       //llenado de matriz2
        for(j=0;j<3;j++)
            scanf("%d",&matriz2[i][j]);
    }

    for(i=0;i<2;i++){       //impresion de matriz1
        for(j=0;j<3;j++){
            printf("%d",matriz1[i][j]);
    }
            printf("\n");
    }

    for(i=0;i<2;i++){       //impresion de matriz2
        for(j=0;j<3;j++){
            printf("%d",matriz2[i][j]);
    }
            printf("\n");
    }

    for(i=0;i<2;i++){       //suma de matricez
        for(j=0;j<3;j++){
            printf();

        }

    }

return 0;
}
