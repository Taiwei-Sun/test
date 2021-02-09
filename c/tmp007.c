#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void bbb(char* v1){
	*v1='b';
}

int main(void){
	char c1[6];
	
	memcpy(c1,"12345",sizeof(c1));

	bbb(&c1[1]);

	printf("%s\n",c1);
	
	return 0;
}	
