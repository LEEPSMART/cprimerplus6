#include <stdio.h>
#include <stdlib.h>
int * make_array(int elem, int val);
void show_array(const int ar[], int n);

int main (void)
{
	int * pa ;
	int size ;
	int value ;

	printf("Enter the number of elements:\n");
	while(scanf("%d",&size) == 1 && size > 0)
	{
		printf("Enter the initialization value:\n");
		scanf("%d",&value);
		pa = make_array(size,value);
		if(pa)
		{
			show_array(pa,size);
			free(pa);
		}
		printf("Enter the numbers of elements(q to quit):\n");
	}
	printf("done\n");
	return 0 ;
}
int * make_array(int elem, int val)
{
	int * ptr ;

	ptr = (int *) malloc(elem * sizeof(int)) ;
    if(ptr != NULL)
       for(int i=0; i<elem; i++)
       	ptr[i] = val ;
    return ptr ;
}
void show_array(const int ar[], int n)
{
	int i ;
	for(i=0; i<n; i++)
	{
		printf("%d ", ar[i]);
		if(i % 8 == 7)
			putchar('\n');
	}
	if(i % 8 != 0)
		putchar('\n');
}