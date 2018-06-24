#include <stdio.h>

int main(void)
{

	int i = 1;
	int ans = 0;

	puts("Enter a number -->");
	scanf("%i", &ans);
	
	// for loops --> when we know the number of iteration
	for (; i < 6; i++)
	{	
		printf("This is FOR loop. i = %d\n", i);
	}


	// when we don't know the number of iteration
	// while loop --> entry control loop
	i = 1;
	while (i <= ans)
	{
		printf("This is while loop. i = %d\n", i);
		i++;	
	}


	// do-while loop --> exit control loop
	i = 1;
	do
	{
		printf("This is do-while loop. i = %d\n", i);
		i++;

	} while (i <= ans);


	return 0;
}

