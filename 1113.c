#include <stdio.h>

int main (int argc, char * argv[])
{
	if(argc < 2)
	{
		puts("Usage: At least one argument!");
		return 1 ;
	}
	else
	{
        for(int i=argc-1; i>0; i--)
        	printf("%s \n", argv[i]);
	}

    return 0 ;
}