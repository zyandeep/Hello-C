/*
	String searching and function pointers
	date: 06-09-2015
*/

// preprocessor directives
#include <stdio.h>
#include <string.h>
#define SIZE 7


// global variables declearation
char *arr[] = {
	"Willam: SBM GOSH likes sports, TV, dining",
	"Matt: SWM NS likes art, movie, theater",
	"Luis: SLM ND likes books, theater, atr",
	"Mike: DWM DS likes trucks, sports and bieber",
	"Peter: SAM likes chees, working out, art",
	"Johs: SJM likes sports, movie, theater",
	"Jed: DBM likes theater, books, dining",
};


// function declearation
int sports_no_bieber( char * );
int sports_or_workout( char * );
int ns_theater( char * );
int arts_theater_or_dining( char * );
void find_str( int (*fn_ptr) (char *) );


// main() function
int main(void)
{
	puts("sports_no_bieber");
	find_str(sports_no_bieber);

	puts("sports_or_workout");
	find_str(sports_or_workout);

	puts("ns_theater");
	find_str(ns_theater);

	puts("arts_theater_or_dining");
	find_str(arts_theater_or_dining);

	puts( "\n just for fun" );
	printf("sports_no_bieber = %p\n", sports_no_bieber);
	printf("&sports_no_bieber = %p\n", &sports_no_bieber);


	return 0;
}


// function definations
int sports_no_bieber( char *str )
{
	return strstr( str, "sports" ) && !strstr( str, "bieber" );
}

int sports_or_workout( char *str )
{
	return strstr( str, "sports" ) || strstr( str, "working out" );
}

int ns_theater( char *str )
{
	return strstr( str, "NS" ) && strstr( str, "theater" );
}

int arts_theater_or_dining( char *str )
{
	return strstr( str, "atr" ) || strstr( str, "theater" ) || strstr( str, "dining");
}


void find_str( int (*fn_ptr) (char *) )
{
	int i;
	puts("search results");
	puts("...............................");

	for (i = 0; i < SIZE; i++)
	{
		if ( (*fn_ptr) (arr[i]) )
		{
			printf("%s \n", arr[i]);
		}
	}
	puts("...............................");
}

