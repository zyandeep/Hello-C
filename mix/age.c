/* your age in seconds */

#include <stdio.h>
#define SECONDS_IN_YEAR 3.156e+7

int main(void)
{
	int age_year;
	float age_sec = 0.;

	printf("Enter your age in: ___ years");
	printf("\b\b\b\b\b\b\b\b\b");
	scanf("%i", &age_year);

	age_sec = age_year * SECONDS_IN_YEAR;

	printf("Your age in seconds: %e, \n%f, \n%a\n", age_sec, age_sec, age_sec);

	return 0;
}