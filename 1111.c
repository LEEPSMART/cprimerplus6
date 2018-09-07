#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 81        
#define LIM 10   

void info(void);

void str_sort(char * strings[], int n);
void str_sort_ascii(char * strings[], int n);
void str_sort_len(char * strings[], int n);
void str_sort_1stword(char * strings[], int n);
int get_len_1stword(char strings[]);

char * s_gets(char * st, int n);

int main(void)
{
    char input[LIM][SIZE];     
    char *ptstr[LIM];          
    int ct = 0;                
    int choice;                     
    
    printf("Input up to %d lines, and I will sort them by your options\n",LIM);
    printf("To stop, press the e key at a line's start.\n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL
           && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];
        ct++;
    }

    info();
    while((choice = getchar()) != 'e')
    {
    	choice = tolower(choice);
        switch(choice)
        {
            case 'a': str_sort(ptstr,ct);
                      break ;
            case 'b': str_sort_ascii(ptstr, ct);
                      break ;
            case 'c': str_sort_len(ptstr, ct);
                      break ;
            case 'd': str_sort_1stword(ptstr, ct);
                      break ;
            default: puts("<Usage> Only type in a,b,c,d or e");
        }
        while(getchar() != '\n')
            continue ;
        info();
    }
    puts("done");
    
    return 0;
}
void str_sort(char * strings[], int n)
{
    for(short i=0; i<n; i++)
    {
        printf("%s\n", (strings[i]));
    }
}
void str_sort_ascii(char * strings[], int n)
{
    char * temp;
    int top, seek;

    int length = 0 ;
    
    for (top = 0; top < n-1; top++)
    {
        for (seek = top + 1; seek < n; seek++)
            if (strcmp(strings[top],strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
    }
    str_sort(strings,n);
}
void str_sort_len(char * strings[], int n)
{
    char * temp;
    int top, seek;
    
    for (top = 0; top < n-1; top++)
    {
        for (seek = top + 1; seek < n; seek++)
            if (strlen(strings[top]) > strlen(strings[seek]))
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }  
    }
    str_sort(strings,n);
}

void str_sort_1stword(char * strings[], int n)
{
    char * temp;
    int top, seek;
    
    for (top = 0; top < n-1; top++)
    {
        for (seek = top + 1; seek < n; seek++)
            if (get_len_1stword(strings[top]) > get_len_1stword(strings[seek]))
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }  
    }
    str_sort(strings,n);
}
int get_len_1stword(char strings[])
{
    int len = 0 ;

    while(strings[len] != ' ')
    {
        len++ ;
    }
    return len ;
}
void info(void)
{
    printf("Here are some options:\n");
    printf("a)print original string\n");
    printf("b)print string in ASCII order\n");
    printf("c)print string in length\n");
    printf("d)print string in the length of 1st words\n");
    printf("e)exit program\n");
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