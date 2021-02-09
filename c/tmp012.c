
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int day ;
   unsigned short int year;
   char weekday[20], month[20], dtm[100];

   strcpy( dtm, "Saturday March 25 ABC" );
   sscanf( dtm, "%s %s %d  %hx", weekday, month, &day, &year ); //%hx for short

   printf("%s %d, %x = %s\n", month, day, year, weekday );
    
   return(0);
}

