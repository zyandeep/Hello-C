/* Display Module */

#include <stdio.h>
#include <time.h>
#include "lotto.h"

extern int ball[BALLS];

void display(void)
{
	int i;

	puts("This week's lotto ball winners are...");

	/* display the lotto balls */
	for (i = 0; i < BALLS; i++)
	{
		pause( time(NULL) );
		printf("BALL[%d] = %i\n", i + 1, ball[i]);
	}

	puts("\nGood luck in the drawing!\n");
}

/* delay the output for  sec */
void pause(time_t t)
{
	while ( difftime(time(NULL), t) < DELAY )
		;
}