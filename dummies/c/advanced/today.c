/* the UNIX epoch calculation 
	
	* time_t type = long signed int
	* size_t type = long unsigned int
*/

#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t now;

	// time( &now );
	now = time(NULL);
	
	printf("The time is now: %ld seconds since UNIX epoch\n", now);
	printf("The local time is now: %s\n", ctime(&now));

	return 0;
}