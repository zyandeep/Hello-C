// Example of of array

#include <stdio.h>

#define SIZE 5

int main(void)
{
	float temps[SIZE], sum = 0.0;
	int i = 0;
	
	puts("Enter temperatures of the last five days: ");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%f", &temps[i]);
	}

	puts("The temperatures of the last five days are: ");
	for (i = 0; i < SIZE; i++)
	{
		printf("day[%i]: %5.2f\n", i + 1, temps[i]);
		sum += temps[i]; 
	}
	printf("The average temperature is: %5.2f\n", sum / SIZE);

	return 0;
} 