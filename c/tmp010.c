#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define AAA
#define BBB

void aaa(aa)
int aa;
{
	printf("aa=%d\n",aa);
}


int main(void){

#if !(defined(AAA) || defined(BBB))
	aaa(123);
#endif

	return 0;
}	
