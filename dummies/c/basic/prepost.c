/*
	Pre- and post-incrementation in c
*/

#include <stdio.h>

int main(void)
{
	int alpha;
	int beta;

	alpha = 5;
	beta = alpha--;
	// beta = alpha++;

	// beta = ++alpha++;  	can't use both simultaneously 

	printf("Alpha = %d\n", alpha);
	printf("Beta = %d\n", beta);


	return 0;
}