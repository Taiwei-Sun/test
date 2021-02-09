
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char msg[100];
}m_t;

typedef struct {
	int id;
	m_t msgs[4];
}msg_t;

int main (void) {
	msg_t mm;

	memset(&mm,0,sizeof(msg_t));

	printf("msgs[0].msg==NULL %s\n",mm.msgs[0].msg==NULL? "true":"false");
	printf("msgs[0].msg[0]==0 %s\n",mm.msgs[0].msg[0]==0? "true":"false");
	printf("msgs[0].msg[0]=='\\0' %s\n",mm.msgs[0].msg[0]=='\0'? "true":"false");

	return(0);
}




