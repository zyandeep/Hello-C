/* Sort Module */

#include <stdlib.h>
#include "lotto.h"

extern int ball[BALLS];

void sort(void)
{
	qsort(ball, BALLS, sizeof(int), comparator);
}

int comparator(const void *p1, const void *p2)
{
	int b1 = *(int *)p1;
	int b2 = *(int *)p2;

	return (b1 - b2);
}