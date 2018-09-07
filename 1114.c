#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char * argv[])
{
	double num,exp ;

	if(argc != 3)
		puts("Usage:<program_name> <num> <exp>");
	else
	{
        num = atof(argv[1]);
        exp = atof(argv[2]);
        printf("%f to the %f power = %g\n", num, exp, pow(num,exp));
	}
    return 0 ;
}