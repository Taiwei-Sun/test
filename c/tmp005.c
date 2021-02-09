#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct{
	void (*print_test_t)(int n);
}test_t;

void print_test_func(int n){
	printf("%d\n",n);
}

int main(void){

	test_t tt;
	tt.print_test_t=print_test_func;
	tt.print_test_t(3);
	
	
	return 0;
}	
