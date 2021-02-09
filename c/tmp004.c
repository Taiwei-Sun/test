#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){

	// printf("sizeof(int)=%lu\n",sizeof(int));
	
	unsigned int kk=0x12abcdef;
	unsigned char *kkk;
	
	kkk=(unsigned char*)&kk;
	
	printf("kk=%x\n",kk);
	printf("kkk[0]=%x kkk[1]=%x kkk[2]=%x kkk[3]=%x \n",kkk[0],kkk[1],kkk[2],kkk[3]);
	

	return 0;
}	
