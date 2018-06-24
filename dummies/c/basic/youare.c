#include <stdio.h>

int main(void)
{
	char first[20];
	char last[20];

	printf("What is your first name? ");
	fgets(first, 20, stdin);

	printf("What is your last name? ");
	fgets(last, 20, stdin);

	printf("Your first name: %sAnd your last name: %s", first, last);

	return 0;
}