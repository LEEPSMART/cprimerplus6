#include <stdio.h>
#include<stdlib.h>
#define SIZE 100

void sort_n(int ar[], int n);
void show_n(const int ar[], int n);
int main (void)
{
	int array[SIZE];

	for(int i=0; i<100; i++)
	{
		array[i] = rand() % 10 + 1 ;
	}
	printf("Oringal:\n");
	show_n(array,SIZE);
	printf("After sorting:\n");
	sort_n(array,SIZE);
	show_n(array,SIZE);
	printf("done\n");

	return 0 ;
}
void sort_n(int ar[], int n)
{
    int temp ;
    int top, search ;

    for(top=0; top<n-1; top++)
    {
    	for(search=top+1; search < n; search++)
    	{
    		if(ar[search] >= ar[top])
    		{
    			temp = ar[search];
    			ar[search] = ar[top];
    			ar[top] = temp ;
    		}
    	}
    }
}
void show_n(const int ar[], int n)
{
	int i ;
	for(i=0; i<n; i++)
	{
		printf("%3d ", ar[i]);
		if(i % 10 == 9)
			printf("\n");
	}
}