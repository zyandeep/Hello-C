#include <stdio.h>

void flush_stdin();

int main(void)
{
	int number;
	float iq;
	char first;

	puts("IQ Calculator:");
	printf("Enter your house or apartment no: ");
	scanf("%i", &number);

	flush_stdin();

	printf("Enter the first letter of your last name: ");
	scanf("%c", &first);

	puts("Calculating your IQ...");
	iq = number / first;

	if (iq < 50.0)
	{
		puts("Low IQ, so adding 100...");
		iq += 100;
	}
	else if (iq >= 51 && iq <= 80)
	{
		puts("IQ between 51 & 80, so doubling it up...");
		iq *= 2;
	}

	printf("This computer guesses your IQ to be %f.\n", iq);

	return 0;
}

// eat all residual characters from stdin
void flush_stdin()
{
	while (getc(stdin) != '\n');
}