// infinite or endless loop

#include <stdio.h>

int main(void)
{
	int packet;

	puts("Processing 1000 packets...");

	for (packet = 0; packet < 1000; packet++)
	{
		printf("Doing amazing things with packet#%d\n", packet + 1);
	}

	return 0;
}