#include <stdio.h>

typedef struct 
{
	unsigned bit1 : 2;
	unsigned bit2 : 1;
	unsigned bit3 : 1;

} Test;

int main(void)
{
	int sum = 0, num;
	Test t;
	void *p = &t;
	

	printf("\nEnter a number: ");
	scanf("%i", &num);

	/*for (i = 1; i < n; i++)
	{
		if (i % 7 == 0)
			continue;
		else
			printf("%d\n", i);

		if (i % 7)
			printf("%d\n", i);
	}*/

	while(num > 0)
	{
		sum += num % 10;
		num /= 10;
	}

	printf("Sum of the digits = %d\n", sum);

	return 0;
}
