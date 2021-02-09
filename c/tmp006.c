#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define kkk(n)			\
{				\
	printf("n=%d\n",n);	\
}				\

void bbb(char tt[6]){
	printf("sizeof(tt)=%lu\n",sizeof(tt));
}

int main(void){
	char *c1="12345";

	bbb(c1);

	kkk(3)
	
	return 0;
}	
