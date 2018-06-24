// Example of of array

#include <stdio.h>

int main(void)
{
	float iq_array[] = {120.0, 230.26, 150.50, 250.75, 320.0};
	int i = 0;
	
	for (i = 0; i < 5; i++)
	{
		printf("IQ of co-worker[%d] is: %6.2f\n", i + 1, iq_array[i]);
	}
	
	return 0;
} 