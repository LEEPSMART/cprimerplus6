#include <stdio.h>
#define LIM 10

char * getnchar(char str[], int n);

int main (void)
{
    char input[LIM];
    char * check ;

    check = getnchar(input,LIM-1);
    if(check)
    	puts(input);
    else
    	puts("Input failed.");
    puts("done");

	return 0 ;
}
char * getnchar(char str[], int n)
{
	int i ;
	int ch ;

	for(i=0; i<n; i++)
	{
		ch = getchar();
		if(ch != EOF)
			str[i] = ch ;
        else
        	break ;
	}
	if(ch == EOF)
		return NULL ;
	else
	{
		str[i] = '\0';
		return str ;
	}
}