#include <stdio.h>
#include <ctype.h>
#define LEN 80
char * getwords(char * str);
int main (void)
{
	char input[LEN];

	while(getwords(input) != NULL)
		puts(input);
	puts("done");
    return 0 ;
}
char * getwords(char * str)
{
    int ch;
    char * orig = str;

    while ((ch = getchar()) != EOF && isspace(ch))
    	   continue;

    if (ch == EOF)
    	return NULL;
    else
        *str++ = ch;

    while ((ch = getchar()) != EOF && !isspace(ch))
    	*str++ = ch;
    *str = '\0'; 
    
    if (ch == EOF)
        return NULL;
    else
    {
        while (ch != '\n')
                ch = getchar();
        return orig;
    }
}