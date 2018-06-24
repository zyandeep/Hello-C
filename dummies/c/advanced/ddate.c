/* displays the date in this fashion: dd/mm/yy */

#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t now;
	struct tm *t;
	int day, month, year;

	time( &now );				
	t = localtime( &now );   	/* get the local time structure */

	day = t->tm_mday;
	month = t->tm_mon + 1;
	year = (t->tm_year + 1900) % 2000;
	
	printf("today is %02d/%02d/%02d\n", day, month, year);
	
	return 0;
}