#include<stdio.h>
#include<conio.h>

main()
{
	int arreglo1[2]={5,1};
	int arreglo2[2]={10,2};
	int resultado[2];
	int i,j;
	
	for(i=0;i<2;i++)
	    printf("%i \n", arreglo1[i]);

	for(i=0;i<2;i++)
	    printf("%i\n", arreglo2[i]);
	
        for(i=0;i<2;i++)
        {
	    resultado[i]=arreglo1[i]+arreglo2[i];
	    printf("%i", resultado[i]);
    	}
	getch();
	
}
