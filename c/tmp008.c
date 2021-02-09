#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	void (* print)();
	void (* set)();
}func_list;

int global_bb=0;

static void aaa(){
	printf("bb=%d\n",global_bb);
}

void bbb(int bb){
	global_bb=bb;
}

int main(void){
	
	func_list ccc={aaa,bbb};
	
	ccc.set(123);
	ccc.print();


	return 0;
}	
