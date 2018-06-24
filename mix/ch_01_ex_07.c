#include <stdio.h>

void smile(void);

int main(void)
{
	smile(); smile(); smile();
	puts(" ");
	smile(); smile();
	puts(" ");
	smile();
	puts(" ");

	return 0;
}

void smile(void)
{
	printf("Smile!");;
}