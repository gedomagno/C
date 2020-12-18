#include<stdio.h>
#include<malloc.h>
#include<string.h>

	typedef struct rec
	{
    		int i;
    		float PI;
    		char A;
    		char n[30];
	} r;

	int main()
	{
    		struct rec *ptr_one;

    		ptr_one = (struct rec *) malloc (sizeof(struct rec));

    		(*ptr_one).i = 10;
    		(*ptr_one).PI = 3.14;
    		(*ptr_one).A = 'a';
    		char n[30];
    		scanf("%s", &n);
    		strcpy((*ptr_one).n, n);

    		printf("primer valor: %d\n", ptr_one->i);
    		printf("segundo valor: %f\n", ptr_one->PI);
    		printf("tercer valor: %c\n", ptr_one->A);
    		printf("cuarto valor: %s\n", ptr_one->n);

    		free(ptr_one);

    		return 0;
	}
