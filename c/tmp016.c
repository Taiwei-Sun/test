
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	void (*f)();
	void (*f1)();
	void (*f2)();
} func_t;

void func_print(){
	printf("hello\n");
}

void func_print1(int i){
	printf("hello %d\n",i);
}

void func_print2(char *str){
	printf("hello %s\n",str);
}



int main (void) {
	func_t kk;
	
	kk.f=func_print;
	kk.f1=func_print1;
	kk.f2=func_print2;

	kk.f();
	kk.f1(123);
	kk.f2("234");
	
	return(0);
}




