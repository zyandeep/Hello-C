#include <stdio.h>

int main(void)
{
	int array[7];
	int i;

	printf("Enter 7 integers: \n");

	for (i = 0; i < 7; i++)
	{
		scanf("%d", (array + i));
	}

	printf("\nReading the array elements in reverse...\n");
	for (i--; i >= 0; i--)
	{
		printf("array[%d] = %d\n", i, *(array + i));
	}

	return 0;
}
