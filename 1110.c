#include <stdio.h>
#define LEN 81

void replace_blank(char * str);
char * s_gets(char * st, int n);

int main (void)
{
    char string[LEN];

    puts("input a string, enter to quit");
    while(s_gets(string,LEN) != NULL && string[0] != '\0')
    {
        replace_blank(string);
        puts(string);
        puts("input a string, enter to quit");
    }
    puts("done");
    return 0 ;
}
void replace_blank(char * str)
{
    char * ptr ;

    while(*str)
    {
         if(*str == ' ')
         {
            ptr = str ;
            do
            {
                *ptr = *(ptr+1);
                ptr++ ;
            }while(*ptr);
         }
     str++;
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


