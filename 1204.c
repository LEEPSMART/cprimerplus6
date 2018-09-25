#include <stdio.h>

unsigned count(void);
int main (void)
{
    unsigned t ;

    printf("How many loop do you want?\n");
    scanf("%u",&t);
    for(short i=0; i<t; i++)
        printf("count() use %u\n", count());
    return 0 ;
}
unsigned count(void)
{
	static unsigned count = 0 ;
	return ++count ;
}