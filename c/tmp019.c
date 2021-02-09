
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRINTF(format,...) printf(format,__VA_ARGS__);
#define PRINTF_OLD(format,...) printf(format,##__VA_ARGS__);
#define PRINTF2(args...) printf(args);

int main (void) {
	
	PRINTF("num=%d\n",1);
	PRINTF_OLD("num=%d\n",2);
	PRINTF2("num=%d\n",3);
	return(0);
}




