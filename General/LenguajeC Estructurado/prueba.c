#include<stdio.h>

main()
{
      int arreglo[5], i;
      
      for(i=0;i<5;i++)
      {
      printf("Ingrese el %d elemento del arreglo", i+1);
      scanf("%d",&arreglo[i]);
      }

      for(i=0;i<5;i++)      
      {
      printf("El %d elemento del arreglo es: %d\n",i+1,arreglo[i]);
      
      }
                            
      getch();
}
