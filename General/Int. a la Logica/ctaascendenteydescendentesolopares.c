/* Programa que realiza una cuenta entre dos limites (ascendente o descendente) y solo imprime pares
   Realizo Gerardo Maldonado
   18-Agosto-2014, 6:37 */
   
# include<stdio.h>   
# include<stdlib.h>
# include<conio.h>

main () {
     
     int liminf=0;
     int limsup=0;
     int ayc=0;
     
     printf("\n Introduzca el limite inferior ");
     scanf("%i", &liminf);
     printf("\n Introduzca el limite superior ");
     scanf("%i", &limsup);
     printf("\n Presione 1 si CA o 0 si CD ");
     scanf("%i", &ayc);
     
     if(ayc==1){
               while(liminf<=limsup){ if(liminf%2==0)
                                     { printf(" %i,", liminf);}
                                     liminf ++;
                                     }
               } else{
                      if(ayc==0) // la condicion if dentro del else no siempre es necesaria establecerla 
                      while(limsup>=liminf){ if(limsup%2==0)
                                            {printf(" %i,", limsup);}
                                            limsup --;
                                            }
                      }
     getch ();
     }
