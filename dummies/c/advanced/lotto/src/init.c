/* Init Module */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lotto.h"

void init(void)
{
	/* use 'time' as random seed */
	seed_randomizer();

	/* display startup text */
	puts("L O T T O  P I C K E R \n");
	puts("Press Enter to pick this week’s numbers:");
	getchar();

}

void seed_randomizer(void)
{
	srandom( (unsigned int) time(NULL));
}