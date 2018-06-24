/* adding pause with differen */

#include <stdio.h>
#include <time.h>

#define DELAY 2.0

void pause(time_t t1);

int main(void)
{
	int i;
	time_t now;

	puts("Someting aweful is gonna happen exactly after 10 seconds.");
	puts("Save your butt when you have time....");

	for (i = 1; i <= 10; i++)
	{
		time( &now );
		pause(now);
		printf("tick tick %d\n", i);
	}
	puts("** Blast Off! **");

	return 0;
}

void pause(time_t t1)
{
	time_t t2;

	do {
		t2 = time(NULL);
	
	} while ( difftime(t2, t1) < DELAY );
}