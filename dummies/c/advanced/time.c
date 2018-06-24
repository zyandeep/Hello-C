/* Breaking down the Unix epoch to day,month, year and more...*/

#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t now;
	struct tm *t;
	char *week[] = {
		"Sunday",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday"
	};
	char *month[] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	time( &now );				
	t = localtime( &now );   	/* get the local time structure */

	printf("The time is now: %ld seconds since UNIX epoch\n", now);
	printf("The local time is now: %s\n", ctime(&now));
	puts("From the time structure...");

	printf("It is now %2d:%02d:%02d %s\n", 24 - t->tm_hour, t->tm_min, t->tm_sec, 
			(t->tm_hour >= 12) ? "p.m." : "a.m." );
	printf("day of the month = %d\n", t->tm_mday);
	printf("month = %s\n", month[t->tm_mon]);
	printf("no of year since 1900 = %d\n", t->tm_year);
	printf("day of week = %s\n", week[t->tm_wday]);
	printf("day in the year = %d\n", t->tm_yday);
	
	if ( !t->tm_isdst )
		puts("Daylight saving time is off");
	else if ( t->tm_isdst > 0 )
		puts("Daylight saving time is on");
	else
		puts("The computer doesn't know about daylight saving time!");

	return 0;
}