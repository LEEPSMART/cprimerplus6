#include <stdio.h>
#include <ctype.h>

int my_atoi(const char *str);

int main (int argc, char * argv[])
{
    int input;

    if(argc != 2)
    	puts("Usage:<program_name> <argv_1>");
    else
    {
    	input = my_atoi(argv[1]);
    	printf("%d \n", input);
    }

	return 0 ;
}
int my_atoi(const char *str)
{
	int total = 0 ;

	while(*str != '\0')
	{
		if(!isdigit(*str))
			return 0 ;
		else
		{
			total *= 10 ;
			total += *str - '0';
		}
		str++;
	}
	return total ;
}

//int atoi(const char *str)
//{
//	if(!str)
//		printf("Enter valid string\n");
//	char * p = str ;
//
//	int number = 0 ;
//	while((*p >= '0') && (*p <= '9'))
//	{
//          number = number * 10 - (*p - '0');
//          p++;
//	}
//	return number ;
//}