// 1202pel2-2b.c
#include <stdio.h>
#include "1202pel2-2a.h"
int main (void)
{
	int mode ;

	printf("Enter 0 for metric mode, 1 for US mode\n");
	scanf("%d",&mode);

	while(mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode");
		printf("(-1 to quit)\n");
		scanf("%d",&mode);
	}
	printf("done\n");
	return 0 ;
}