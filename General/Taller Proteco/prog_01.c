#include<stdio.h>

main (){
     
     int a[10]={1,2,3,4,5,6,7,8,9,10};
     int*p1=&a[0];
     int *p2=&a[5];

     printf("p1 apunta al valor: %d", *p1);
     printf("p2 apunta al valor: %d", *p2);
     p1=p1+5;
     printf("p1 apunta ahora a %d\n", *p1);
     
     
     getch();
     
     }
