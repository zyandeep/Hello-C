/* storage class, enum, union etc in C */

#include <stdio.h>

int main(void)
{
	// enum's "under the hood" integer starts from 0 and continues
	// if the first element's value is changed to something else than the rest of the 
	// elements' value changes accordingly

	enum days {SUNDAY = 10, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
	enum days day;

	/*register int i = 0;
	register unsigned int ui = 0;
	register short int si = 0;
	register char c = 'A';*/

	for (day = SUNDAY; day <= SATURDAY; day++)
	{
		printf("day = %i\n", day);
	}

	return 0;
}