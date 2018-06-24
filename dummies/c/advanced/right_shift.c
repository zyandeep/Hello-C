/* bit wise right-shift operator */

#include <stdio.h>

int main(void)
{
	int number = 64;
	float fnum = 64.0;
	
	// number = number >> 4;
	// number >>= 4;

	printf("%d / 2 =  %d\n", number, number >> 2);
	printf("%d / 4=  %d\n", number, number >> 4);
	/*printf("%f / 2 =  %f\n", fnum, fnum >> 2);
	printf("%f / 4=  %fn", fnum, fnum >> 4);
*/	
	return 0;
}