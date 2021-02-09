
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PERRY_PRINT(flag) { \
	printf("flag=%d\n",flag); \
	} \



int main (void) {
	PERRY_PRINT(123);
	return(0);
}




