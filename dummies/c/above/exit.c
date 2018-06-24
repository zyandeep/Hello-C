/* "Leaving early" from main() with 'return' 
	Abnormal exit with abort()
	Normal exit with exit( exitcode )
	Fancy/gracefull exit atexit()
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

void loop(int count);
void abort_me(void);
void ef1(void);
void ef2(void);
void ef3(void);

int main(void)
{
	char ans;

	// registering functions
	atexit(ef1);
	atexit(ef2);
	atexit(ef3);
	
	puts("Would you like to see the animation [Y/N]? ");
	ans = getchar();

	if ( toupper(ans) == 'N')
		return EXIT_SUCCESS;

	puts("Someday a stunning animation effect will appear here...");
	loop(10);

	putchar('\n');

	// abort_me();

	exit(EXIT_SUCCESS);
}

void loop(int count)
{
	int i, j;

	for (i = 1; i <= count; i++)
	{
		putchar('\n');
		for (j = 1; j <= count; j++)
		{
			printf("[%d%d]", i, j);

			if (i == 8 && j == 10)
				// return;
				exit(EXIT_SUCCESS);
		}
	}
}

void abort_me()
{
	float num;
	float ans; 

	printf("OK computer, find me square root of: ");
	scanf("%f", &num);

	if (num < 0.0f)
		abort();

	ans = (float) sqrt(num);

	printf("The computer says the answer is %.2f\n", ans);
}

void ef1(void)
{
	puts("I was registered first!");
}

void ef2(void)
{
	puts("I was registered second!");	
}

void ef3(void)
{
	puts("I was registered thrid!");
}