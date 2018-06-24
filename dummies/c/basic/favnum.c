#include <stdio.h>

int main(void)
{
	int number;

	printf("Enter your favorite number btw 1 - 10: ");
	scanf("%d", &number);

	if (number == 5)
	{
		puts("Hey, that's my fav too!");
	}
	else
	{
		puts("Ew, I hate this creep!");
	}

	return 0;
}