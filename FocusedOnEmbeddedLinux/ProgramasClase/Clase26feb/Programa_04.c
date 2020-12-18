/*Programa que genera dos hijos y se comunica con ellos*/

#include<stdio.h> 
#include<stdlib.h>

void main ()
{
	int pidh1,pidh2;
	int vector[5]={23,8,207,12,19};
	pidh1=fork();

	if (pidh1) //si es el papa haz	
       {	   
	     pidh2=fork(); //genero al h2
 	     if(pidh2)
		   {
		     int dato1,dato2;
		     if(wait(&dato1)==pidh1) 
			    {
 			      wait(&dato2);
		          printf("\n Terminó primero el hijo1\n");
			      printf("\nEl menor es %d",dato1>>8);	
			      printf("\n El mayor es %d\n",dato2>>8);
		        }
		    else{
		          wait(&dato2);
		          printf("\n Terminó primero el hijo2\n");
			      printf("\nEl menor es %d",dato2>>8);	
			      printf("\n El mayor es %d\n",dato1>>8);
	            }
           }
	     else 
			    {
		          int i,mayor=0;
		          for(i=0;i<5;i++)
                     {
		               if(mayor <vector[i])
		               mayor=vector[i];
		             }
	              exit(mayor); 
                }
       }
	else
       {
	 	 int i,menor=255;
		 for(i=0;i<5;i++)
            {
              if(menor >vector[i])
		      	 menor=vector[i];
		    }
		 exit(menor); 
	   }	


} //cierra main
