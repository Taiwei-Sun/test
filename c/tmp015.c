
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int a;
	int b;
}AA_t;

typedef struct BB_s{
	AA_t aa;
	struct BB_s *next;
}BB_t;


int main (void) {

	BB_t *cc;
	
	cc=(BB_t*)malloc(sizeof(BB_t));
	cc->aa.a=1;
	cc->aa.b=2;

	printf("a=%d b=%d\n",cc->aa.a,cc->aa.b);
 
   return(0);
}

