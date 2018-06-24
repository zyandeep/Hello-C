// do-while and continue example

#include <stdio.h>

#define LOOP 100

int main(void)
{
	int i = 1;

	do
	{
		// if (i % 5 == 0)
		// 	continue;

		if (i % 5)
			printf("[i]: %d\t", i);

	} while (i++ < LOOP);


	return 0;
}