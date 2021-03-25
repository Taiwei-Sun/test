#include <stdio.h>

extern int a;
extern int b;
int c = 2;

void set_b_var(void){
	b=2;
	printf("02 a=%d c=%d\n",a,c);
}