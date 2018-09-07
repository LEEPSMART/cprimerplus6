#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 10

bool is_within(const char * str, const char ch);
char * s_gets(char * st, int n);

int main (void)
{
	char input[LEN];
    char ch ;
    int found ;

    puts("enter a string:");
    while(s_gets(input,LEN) && input[0] != '\0')
    {
    	printf("Enter a character: "); 
    	ch = getchar();
        while (getchar() != '\n')
              continue;
        found = is_within(input, ch);
        if (found)
        	printf("%c found in string %s\n", ch, input);
        else
            printf("%c not found in string.\n", ch);
            
        printf("Next string: ");
    }
    puts("done");
    return 0 ;
}
char * s_gets(char * st, int n)
{
	char * ret_val ;
	int i = 0 ;

	ret_val = fgets(st,n,stdin) ;
	if(ret_val)
	{
		while(st[i] !='\n' && st[i] != '\0')
		      i++ ;
		  if(st[i] == '\n')
		  	st[i] = '\0';
		  else
		  	while(getchar() != '\n')
		  		continue ;
	}
	return ret_val ;
}
bool is_within(const char * str, const char ch)
{
     while (*str != ch && *str != '\0')
     	    str++;
     return *str;
}
