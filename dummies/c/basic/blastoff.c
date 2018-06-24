#include <stdio.h>

int main(void)
{
	int count;

	for (count = 10; count > 0; )
	{
		printf("count = %d\n", count--);
	}
	printf("Now, count = %d and BLASTOFF!!\n", count);
	
	return 0;
}