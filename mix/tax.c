// find the bug

#include <stdio.h>

int main(void)
{
	float g;
	float tax, rate = 0.15f;

	g = 2.1e21f;
	tax = rate * g;

	printf("g = %f, %e\n", g, g);
	printf("tax = %f, %e\n", tax, tax);

	return 0;
}
