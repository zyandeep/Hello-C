#include <stdio.h>

#define SPEEDLIMIT 65
#define RATE 26
#define FISRT_TICKET 85
#define SECOND_TICKET 95
#define THIRD_TICKET 110

int main(void)
{
	int total = 0, fine, speeding;

	/* first ticket */
	speeding = FISRT_TICKET - SPEEDLIMIT;
	fine = speeding * RATE;
	total = total + fine;
	printf(" For going %d in a %d zone: $%d", FISRT_TICKET, SPEEDLIMIT, fine);

	/* second ticket */
	speeding = SECOND_TICKET - SPEEDLIMIT;
	fine = speeding * RATE;
	total = total + fine;
	printf("\n For going %d in a %d zone: $%d", SECOND_TICKET, SPEEDLIMIT, fine);

	/* third ticket */
	speeding = THIRD_TICKET - SPEEDLIMIT;
	fine = speeding * RATE;
	total = total + fine;
	printf("\n For going %d in a %d zone: $%d", THIRD_TICKET, SPEEDLIMIT, fine);

	printf("\n Total in fines: $%d\n", total);

	return 0;
}