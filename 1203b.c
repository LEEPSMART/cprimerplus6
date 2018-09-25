// 1203b.c
#include <stdio.h>
#include "1203.h"
int main (void)
{
	int mode ;
	int prev_mode = METRIC ;
	double distance, fuel ;

	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d",&mode);
	while(mode >= 0)
	{
		check_mode(&mode);
        if (mode == USE_RECENT)
            mode = prev_mode;
        prev_mode = mode;
        get_info(mode, &distance, &fuel);
        show_info(mode, distance, fuel);
        printf("Enter 0 for metric mode, 1 for US mode (-1 to quit):");
        scanf("%d", &mode);
	}
	printf("done");
	return 0 ;
}