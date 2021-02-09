#include <stdio.h>
#include <stdlib.h>

typedef struct __attribute__ ((__packed__)) aa
	{
		int a;
		double b;		     
		char c[10];
	}testa;

typedef struct __attribute__ ((__packed__)) bb
	{
		double a;
		int b;		     
		char c[10];
	}testb;


int main(void){


	testa a;
	testb b;
	printf("size char=%lu int=%lu double=%lu\n",sizeof(char),sizeof(int),sizeof(double));
	printf("size a=%lu b=%lu\n",sizeof(a),sizeof(b));
	printf("&a.a=%p &a.b=%p &a.c=%p \n",&a.a,&a.b,&a.c);
	printf("&b.a=%p &b.b=%p &b.c=%p \n",&b.a,&b.b,&b.c);

//	printf("");


	return 0;
}	
