#include<stdio.h> // programa que lee N numeros e imprime el % de numeros impares y pares

main()

{
      int i,nt,contpar=0,contimpar=0;
      float pp;
      printf("Dame el numero de elementos a evaluar ");
      scanf("%d",&nt);
      int arreglo[nt];
      
      for(i=0;i<nt;i++) // guarda los elementos del arreglo
         { 
		   printf("\tDame el %d elemento ", i+1);
           scanf("%d",&arreglo[i]);
         }
     
	  printf("\nLos elementos ingresados fueron:");  // Imprime los elementos del arreglo
      for(i=0;i<nt;i++)
          printf("\n\t%d", arreglo[i]);
         
	  for(i=0;i<nt;i++) //determina si los numeros son par o impar
	     {
	       if(arreglo[i]%2==0)
             {
			  printf("\n\nEl numero %d es par", arreglo[i]);
			  contpar++;
             } 
			  else
			 { 
			  printf("\n\nEl numero %d es impar", arreglo[i]);
			  contimpar++;     
             }
         }
// cuenta la cantidad de numeros pares e impares                                     
      printf("\n\n\tLa cantidad de numeros par es: %d", contpar);   
      printf("\n\tLa cantidad de numeros impar es: %d", contimpar);   
      
      pp=(float)(contpar*100)/nt; // determina el % de num pares
      printf("\n\nEl porcentaje de numeros pares es: %.2f",pp);

      printf("\nEl porcentaje de numeros impares es: %.2f", (float)(contimpar*100)/nt);//imprime el % de num impares
      
      getch();         
}
      
