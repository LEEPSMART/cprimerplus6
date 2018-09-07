#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main (void)
{
	int n_words = 0 ;
	int n_up_alp = 0 ;
	int n_low_alp = 0 ;
	int n_punct = 0 ;
	int n_digits = 0 ;
    bool inword = false ;
    int ch ;

    puts("Enter text to be analyzed(EOF to end)");
    while((ch = getchar()) != EOF)
    {
    	if(isupper(ch))
    		n_up_alp++ ;
    	else if(islower(ch))
    		n_low_alp++ ;
    	else if(ispunct(ch))
    		n_punct++ ;
    	else if(isdigit(ch))
    		n_digits++ ;
    	if(!isspace(ch) && !inword)
    	{
    		inword = true ;
    		n_words++;
    	}
    	if(isspace(ch) && inword)
    	{
    		inword = false ;
    	}
        printf("\nwords = %d, lowercase = %d, uppercase = %d, ""digits = %d, punctuation = %d\n", n_words,n_low_alp,n_up_alp, n_digits, n_punct);
    }
    return 0 ;
} 