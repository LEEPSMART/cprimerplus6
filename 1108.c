#include <stdio.h>
char * string_in(const char * str1, const char * str2);
int main (void)
{
    char * str1 = "hats";
    char * str2 = "at";
    char * p ;

    p = string_in(str1,str2);

    if(p)
    {
        printf("%s\n",p);
    }
    else
    {
    	puts("Not found!");
    }
	return 0 ;
}
char * string_in(const char * str1, const char * str2)
{
     const char * ptr1 ;
     const char * ptr2 ;

     for(ptr1=str1; *ptr1!='\0'; ++ptr1)
     {
     	for(ptr2=str2; *ptr2!='\0'; ++ptr2)
     	{
     		if(*ptr1 == *ptr2)
     			return (char *) ptr1 ;
     	}
     }
     return NULL ;
}