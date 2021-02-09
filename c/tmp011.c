#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	int text_no;
	char text[40];
}text_t;



int main(void){
	text_t tt;
	char* ttt=tt.text;



	
	printf("pointer tt=%p\n",tt.text);
	printf("pointer &tt=%p\n",&tt.text);
	printf("pointer ttt=%p\n",ttt);
	printf("pointer &ttt=%p\n",&ttt);

	return 0;
}	
