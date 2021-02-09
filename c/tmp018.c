
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum{
	ITEM_SPEED_10M=1,
	ITEM_SPEED_100M=10,
	ITEM_SPEED_1G=100,
	ITEM_SPEED_10G=1000
} port_speed_e;


int main (void) {
	int i=-1;
	port_speed_e p;
	p=i;
	
	printf("p=%d\n",p);

	if(p<ITEM_SPEED_100M)printf("<100M\n");
	else if(p<0)printf("<0\n");
	else printf("other\n");

	return(0);
}




