
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (void) {
	char buf[128];
	int n,eof=1;

	strcpy(buf,"aa9k");
	printf("buf=%s\n",buf);

	eof=sscanf(buf,"aa%dk",&n);
	printf("n=%d eof=%d\n",n,eof);

	strcpy(buf,"mtd9:linux");
	printf("buf=%s\n",buf);

	eof=sscanf(buf,"mtd%d:",&n);
	printf("n=%d eof=%d\n",n,eof);

	strcpy(buf,"mtd9:linuxas123dfasdf");
	printf("buf=%s\n",buf);

	eof=sscanf(buf,"mtd%d:",&n);
	printf("n=%d eof=%d\n",n,eof);

	strcpy(buf,"33 aa9k");
	printf("buf=%s\n",buf);

	eof=sscanf(buf,"aa%dk",&n);
	printf("n=%d eof=%d\n",n,eof);

	strcpy(buf,"as33 aa9k");
	printf("buf=%s\n",buf);

	eof=sscanf(buf,"aa%dk",&n);
	printf("n=%d eof=%d\n",n,eof);

	strcpy(buf,"33 aa9");
	printf("buf=%s\n",buf);

	eof=sscanf(buf,"aa%dk",&n);
	printf("n=%d eof=%d\n",n,eof);

	strcpy(buf,"as33 aa9");
	printf("buf=%s\n",buf);

	eof=sscanf(buf,"aa%dk",&n);
	printf("n=%d eof=%d\n",n,eof);



	return(0);
}




