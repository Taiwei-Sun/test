
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (void) {


	printf("Running echo with system\n");
	system("echo system");
	printf("system Done.\n");

	printf("Running echo with execl\n");
	int ff=fork();
	if(ff!=0)execl("/bin/echo", "/bin/echo", "execl", (char *)NULL);
	printf("execl Done.\n");

	printf("Running echo with execlp\n");
	execlp("echo", "echo", "execlp", NULL);
	printf("execlp Done.\n");


	return(0);
}




