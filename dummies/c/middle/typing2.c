// while loop in C

#include <stdio.h>

int main(void)
{
	puts("Type away with while loop...[press 'q' or 'Q' to quit]");

	while (getchar() != 'q')
		;
	
	return 0;
}