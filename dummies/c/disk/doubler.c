#include <stdio.h>

int double_it(int num);

int main(void)
{
	int num;

	printf("Enter an integer: ");
	scanf("%i", &num);

	num = double_it(num);

	printf("The final value of NUMBER is: %d\n", num);

	return 0;
}

int double_it(int num)
{
	/* base condition */
	if (num < 1024)
	{
		return (double_it(num * 2));
	}
	else
	{
		return num / 2;
	}
}