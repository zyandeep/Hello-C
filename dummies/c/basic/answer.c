#include <stdio.h>

int main(void)
{
	int answer;
	int positive;
	int negative;

	positive = +210;
	negative = -213;
	answer = (4 + (5 - 2)) * (6 / 3);

	printf("The answer is %d\n", answer);
	printf("A positive number is %d\n", +positive);
	printf("A negative number is %d\n", negative);
	printf("The negative of a negative number is %d\n", -negative);


	return 0;
}