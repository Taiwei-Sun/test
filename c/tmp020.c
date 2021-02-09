
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG1 "message 01 "
#define MSG2 "message 02"
#define MSG3 "message 03"
#define MSG_STR " %s"

int main (void) {
	printf("printf test "MSG1 MSG2" "MSG3"\n");
	printf("printf test "MSG1 MSG2" %s\n",MSG3);
	printf("printf test "MSG1 MSG2 MSG_STR"\n",MSG3);
	return(0);
}




