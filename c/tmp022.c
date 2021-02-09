
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG "123456789"

int main (void) {

	int cnt=0;
	char msg[100];

	msg[10]='s';
	msg[11]='\0';

	cnt+= sprintf(msg+cnt,"%s ",MSG);//sprintf() modify 11 char include last '\0', but return 10
	printf("cnt=%u\n",cnt);

	printf("%s\n",msg);
	return(0);
}




