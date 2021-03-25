
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int n1;
	int n2;
	char n3[10];
}m2_t;


int main (void) {
	m2_t mm;

	mm.n1=1;
	mm.n2=2;
	mm.n3[0]='3';
	mm.n3[1]='_';
	mm.n3[2]='\0';

	m2_t mm2=mm;

	printf("mm2.n1=%d\n",mm2.n1);
	printf("mm2.n2=%d\n",mm2.n2);
	printf("mm2.n3=%s\n",mm2.n3);

	return(0);
}




