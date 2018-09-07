#include <stdio.h>
#include <string.h>
#define LEN 81

void reverse_str(char * str);
char * s_gets(char * st, int n);

int main (void)
{
    char string[LEN];

    puts("input a string, and I will reverse it,enter to quit");
    while(s_gets(string,LEN) != NULL && string[0] != '\0')
    {
        reverse_str(string);
        puts(string);
        puts("input a string, and I will reverse it,enter to quit");
    }
    puts("done");
    return 0 ;
}
void reverse_str(char * str)
{
   int i,j ;
   char * temp ;

   unsigned len = strlen(str)-1 ;
   for(i=len-1,j=0; j<len/2; i--,j++)
   {
       *temp = str[i] ;
       str[i] = str[j] ;
       str[j] = *temp ; 
   }
}
char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}