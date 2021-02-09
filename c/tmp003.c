#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void){

	char *kk[5];
	char *kkk="123456789";
	
	kk[0]=(char*)malloc(sizeof(kkk));
	memcpy(kk[0],kkk,sizeof(kkk));
	
	printf("&kk[0]=%p &kk[1]=%p &kk[2]=%p \n",&kk[0],&kk[1],&kk[2]);
	printf("&kk[0][0]=%p &kk[0][1]=%p &kk[0][2]=%p \n",&kk[0][0],&kk[0][1],&kk[0][2]);
	printf("kk[0][0]=%c kk[0][1]=%c kk[0][2]=%c \n",kk[0][0],kk[0][1],kk[0][2]);
	
	memcpy(&kk[0][0],"ab",sizeof("ab")-1);
	printf("kk[0][0]=%c kk[0][1]=%c kk[0][2]=%c \n",kk[0][0],kk[0][1],kk[0][2]);


	return 0;
}	
