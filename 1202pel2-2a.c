//1202pel2-2a.c
#include <stdio.h>
#include "1202pel2-2a.h"
#define US 1
#define METRIC 0
static int mode ;
static double distance ;
static double fuel ;

void clean(void)
{
	while(getchar() != '\n')
		continue ;
}

void set_mode(int m)
{
	extern int mode ;
    if(m == US || m == METRIC)
    {
    	mode = m ;
    }
    else
    	printf("Invalid mode specified. Mode %d(%s) used.\n",
			mode, mode == METRIC ? "metric" : "US");
}

void get_info(void)
{
	printf("Enter distance traveled in %s:", mode == METRIC ? "kilometers" : "miles");
	while(scanf("%lf",&distance) != 1)
	{
		clean();
		printf("Invalid input. Enter distance travelled in %s: ",
			mode == METRIC ? "kilometers" : "miles");
	}

	printf("Enter fuel consumed in %s: ",mode == METRIC ? "liters" : "gallons");
	while (scanf("%lf", &fuel) != 1)
	{
		clean();
		printf("Invalid input. Enter fuel consumed in %s: ",
			mode == METRIC ? "liters" : "gallons");
	}
}

void show_info(void)
{
	if(mode == METRIC)
	{
		printf("Feuel comsumption is %.2lf liters per 100km\n", 100 * fuel/distance);
	}
	else if(mode == US)
	{
		printf("Feuel comsumption is %.2lf miles per gallon\n", distance/fuel);
	}
	else
	{
		printf("Error. Invalid mode: %d\n", mode);
	}
}