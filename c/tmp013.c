
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
	u8 a;
}A2;

typedef struct {
	u8 a;
	u16 b;
	A2 c;
}A1;


int main () {
	
	printf("sizeof(u8)=%lu\n",sizeof(u8));
	printf("sizeof(u16)=%lu\n",sizeof(u16));
	printf("sizeof(u32)=%lu\n",sizeof(u32));

	printf("sizeof(A1)=%lu\n",sizeof(A1));
	printf("sizeof(A2)=%lu\n",sizeof(A2));

	printf("sizeof(A1*)=%lu\n",sizeof(A1*));
 
   return(0);
}

