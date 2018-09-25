// 1203a.c
#include <stdio.h>
#include "1203.h"

void check_mode(int * pm)
{
	if(*pm != US && *pm != METRIC)
	{
		printf("Invalid mode specified. Mode %d\n", *pm);
		printf("Previous mode will be used.\n");
		*pm = USE_RECENT ;
	}
}

void get_info(int mode, double * pd, double * pf)
{
	if(mode == METRIC)
		printf("Enter distance traveled in kilometers: ");
	else
		printf("Enter distance traveled in miles: ");
	scanf("%lf",pd);

    if (mode == METRIC)
        printf("Enter fuel consumed in liters: ");
    else
        printf("Enter fuel consumed in gallons: ");
    scanf("%lf", pf);
}
void show_info(int mode, double distance, double fuel)
{
	printf("Fuel consumption is\n");
	if(mode == METRIC)
		printf("%.2f liters per 100 km.\n", 100 * fuel / distance);
	else
		printf("%.1f miles per gallon.\n", distance / fuel);
}
