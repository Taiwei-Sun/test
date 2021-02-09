
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void) {
	
	int aaa[]={3,6,9}; 
	int *aa=aaa;

	printf("*aa=%d\n",*aa);
	*aa++;
	printf("after *aa++ =%d\n",*aa);
	(*aa)++;
	printf("after (*aa)++  =%d\n",*aa);

	printf("*aa+1  =%d\n",*aa+1);
 
   return(0);
}

