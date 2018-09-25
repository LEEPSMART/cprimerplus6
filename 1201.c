#include <stdio.h>
void critic(int * p);
int main(void)
{
    int units = 0 ;
    int * ptr = &units ;
    
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while ( *ptr != 56)
        critic(ptr);
    printf("You must have looked it up!\n");
    
    return 0;
}

void critic(int * p)
{
    printf("No luck, my friend. Try again.\n");
    scanf("%d", p);
}
