#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void seperator(int repeat, char c);
void generator(void);

int main(void)
{
	puts("Here are today’s secret number values --- ");

	/* get the current timestamp as the seed value */
	srandom( (unsigned int) time(NULL));

	generator();
	seperator(10, '-');
	generator();
	seperator(15, '*');
	generator();
	seperator(20, '#');

	putchar('\n');
	
	return 0;
}

/* prints a dashed line */
void seperator(int repeat, char c)
{
	int i;

	for (i = 1; i <= repeat; i++)
		putchar(c);
}

/* generates random numbers */
void generator()
{
	printf("\n%ld\n", random());
}