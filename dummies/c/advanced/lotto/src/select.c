/* Select_Ball Module */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lotto.h"

extern int ball[BALLS];

void select_ball(void)
{
	int numbers[RANGE];
	int b, i;

	/* initialize the traiking array */
	for (i = 0; i < RANGE; i++)
	{
		numbers[i] = 0;
	}

	/* draw the numbers */
	for (i = 0; i < BALLS; i++)
	{
		do {
			b = random() % RANGE;

		} while ( numbers[b] );

		/* number drawn */

		numbers[b] = 1;		/* drawn number is iheiked */
		ball[i] = b + 1;	/* save number drawn */
	}
}