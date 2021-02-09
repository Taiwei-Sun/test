
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG1 "message 01"
#define MSG2 "message 02"
#define MSG3 "message 03"

int main (void) {

	int cnt=0;
	char msg[100];

	cnt+= sprintf(msg+cnt,"%s ",MSG1);
	printf("cnt01=%u sizeof(MSG1)=%lu\n",cnt,sizeof(MSG1));
	cnt+= sprintf(msg+cnt,"%s ",MSG2);
	cnt+= sprintf(msg+cnt,"%s ",MSG3);

	printf("%s\n",msg);
	return(0);
}




