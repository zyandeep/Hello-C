#include <stdio.h>

int main(void)
{
	int tick;

	puts("Variable tick is uninitialised");

	for (tick = 1; tick <= 10; tick++)
	{
		printf("\tIn the loop, tick = %d\n", tick);

		if (tick > 5)
			break;
	}
	printf("After the loop, tick = %d\n", tick);
	
	return 0;
}